// from server: 96% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#include <list>
#include <intrin.h>
#include <utility>
namespace boost {
namespace detail {
struct sp_counted_base {
    virtual ~sp_counted_base() {}
    virtual void dispose()=0;
    virtual void destroy(){delete this;}
    long use_count_,weak_count_;
    void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
    void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {
    sp_counted_base* pi_;
    shared_count():pi_(0){}
    template<class Y> explicit shared_count(Y* p);
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
inline void sp_enable_shared_from_this(const shared_count&, ...){}
}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
    explicit shared_ptr(T* p):px(p),pn(p){detail::sp_enable_shared_from_this(pn,p,p);}
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

namespace RBX {class Instance;}
struct Binder;
struct Binding {
 char storage[32];
 Binding(boost::shared_ptr<RBX::Instance>,int,Binder*);
};
struct Binder {
 char prefix[12];
 std::list<boost::shared_ptr<Binding> > bindings;
 void update();
 void bind(boost::shared_ptr<RBX::Instance>,int);
};
void Binder::bind(boost::shared_ptr<RBX::Instance> instance,int property){
 Binding* added=new Binding(instance,property,this);
 bindings.push_back(boost::shared_ptr<Binding>(added));
 update();
}
