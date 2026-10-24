// from server: 99% by Espeon
// from server: 97% by king_originala
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <intrin.h>
#include <utility>
namespace boost {
namespace detail {
struct sp_counted_base {
    sp_counted_base():use_count_(1),weak_count_(1){}
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
template<class Y>struct sp_counted_impl_p:sp_counted_base {Y*pointer;explicit sp_counted_impl_p(Y*p):pointer(p){}void dispose(){delete pointer;}};
struct shared_count {
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    template<class Y> __declspec(noinline) explicit shared_count(Y*p):pi_(0){try{pi_=new sp_counted_impl_p<Y>(p);}catch(...){delete p;throw;}}
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
namespace detail {inline void sp_enable_shared_from_this(const shared_count&,...) {}}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    template<class Y> explicit shared_ptr(Y*p):px(p),pn(p){detail::sp_enable_shared_from_this(pn,p,p);}
    shared_ptr& operator=(const shared_ptr& r){px=r.px;pn=r.pn;return *this;}
    void swap(shared_ptr& r){std::swap(px,r.px);pn.swap(r.pn);}
    void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}


struct CodeProfiler {void sample(unsigned);};
struct ProfileMark {CodeProfiler*section;void*previous;bool frameTick;double startTime;ProfileMark(CodeProfiler&,bool);~ProfileMark();};
template<class T>struct ScopedPtr {T*pointer;T&operator*()const{return *pointer;}T*operator->()const{return pointer;}};
struct StandardOut {void __cdecl print(int,const char*,...);static boost::shared_ptr<StandardOut> singleton();};
struct Settings {char prefix[0x133];bool printPacketBuffer;char gap[0x14c-0x134];int maxDataModelSendBuffer;float sendRate;};
Settings&settings();
double __cdecl localTime();
unsigned __cdecl networkTime();
struct SystemAddress {unsigned address;unsigned short port;};
struct NetworkStatistics {unsigned messageSendBuffer[4];char prefix[0x64-16];unsigned field64,field68;char to78[0x78-0x6c];unsigned field78;char to94[0x94-0x7c];unsigned field94;char toc4[0xc4-0x98];bool bandwidthExceeded;};
struct Peer {void**vtable;NetworkStatistics*GetStatistics(SystemAddress a){typedef NetworkStatistics*(__thiscall*Fn)(Peer*,SystemAddress);return reinterpret_cast<Fn>(vtable[0x10c/4])(this,a);}};
struct Sender {void**vtable;void step(){typedef void(__thiscall*Fn)(Sender*);reinterpret_cast<Fn>(vtable[1])(this);}};
struct Receiver {typedef void(__thiscall*Step)(Receiver*,unsigned); Step* vtable;};
struct Primary {virtual ~Primary();char toParent[0x104-4];void*parent;void*getParent()const{return parent;}char rest[0x2b74-0x108];};
struct Plugin {virtual ~Plugin();virtual void OnAttach(Peer*);virtual void OnDetach(Peer*);virtual void OnStartup(Peer*);virtual void Update(Peer*);};
struct Replicator:Primary,Plugin {
 double lastSendTime;Sender*sender;Receiver*receiver;
 char toEnabled[0x15c-0x14];bool sendPhysicsEnabled;
 char toProfile[0x1a8-0x15d];ScopedPtr<CodeProfiler>profileReplication;
 char toBusy[0x1b8-0x1ac];ScopedPtr<CodeProfiler>profileReceive,profileSend,profilePhysics;
 char toCounters[4];ScopedPtr<CodeProfiler>counter94,counter78,counter64,counter68;
 char toAddress[8];SystemAddress remotePlayerId;
 int sendItems(int);bool sendPhysicsPacket();
 virtual void Update(Peer*);
};
void Replicator::Update(Peer*peer){
 Plugin::Update(peer);
 if(getParent()){
  ProfileMark mark(*profileReplication,false);
  double t=localTime();
  if(1.0f/settings().sendRate+lastSendTime<t){
   bool enabled=sendPhysicsEnabled;
   if(enabled){ProfileMark m1(*profileSend,false);ProfileMark m2(*profilePhysics,false);sender->step();}
   NetworkStatistics*statistics=peer->GetStatistics(remotePlayerId);
   if(statistics){
    counter94->sample(statistics->field94);counter78->sample(statistics->field78);counter64->sample(statistics->field64);counter68->sample(statistics->field68);
    Settings&configuration=settings();int buffered=statistics->messageSendBuffer[2]+statistics->messageSendBuffer[1];int available=configuration.maxDataModelSendBuffer;available-=buffered;
    if(available>=1&&!statistics->bandwidthExceeded){
     if(enabled)available-=sendItems(1);
     if(sendPhysicsPacket())--available;
     if(enabled)sendItems(available);
     lastSendTime=t;
    }
    if(settings().printPacketBuffer){
     unsigned medium=statistics->messageSendBuffer[2];unsigned high=statistics->messageSendBuffer[1];unsigned buffer=medium+high*2;
     if(buffer>static_cast<unsigned>(settings().maxDataModelSendBuffer))StandardOut::singleton()->print(2,"SendBuffer = %d",buffer);
     else if(buffer>0)StandardOut::singleton()->print(1,"SendBuffer = %d",buffer);
    }
   }
   if(!enabled){ProfileMark receive(*profileReceive,false);Receiver*target=receiver; Receiver::Step* slot=&target->vtable[1]; unsigned time=networkTime(); (*slot)(target,time);}
  }
 }
}
