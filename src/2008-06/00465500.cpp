// from server: 100% by king_originala
// roc 2008-06 00465500  unit: CScriptEditor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00465500
//
// 00465500  51                   push ecx
// 00465501  837c241400           cmp dword ptr [esp + 0x14], 0
// 00465506  56                   push esi
// 00465507  8bf1                 mov esi, ecx
// 00465509  7534                 jne 0x46553f
// 0046550b  83ec08               sub esp, 8
// 0046550e  8bc4                 mov eax, esp
// 00465510  c70000000000         mov dword ptr [eax], 0
// 00465516  8d8e14ffffff         lea ecx, [esi - 0xec]
// 0046551c  8964240c             mov dword ptr [esp + 0xc], esp
// 00465520  c7400400000000       mov dword ptr [eax + 4], 0
// 00465527  e834fdffff           call 0x465260
// 0046552c  8b4654               mov eax, dword ptr [esi + 0x54]
// 0046552f  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00465532  6a00                 push 0
// 00465534  6a00                 push 0
// 00465536  6a10                 push 0x10
// 00465538  51                   push ecx
// 00465539  ff150c2e8000         call dword ptr [0x802e0c]
// 0046553f  5e                   pop esi
// 00465540  59                   pop ecx
// 00465541  c21000               ret 0x10

// from server: 92% by Espeon
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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
    shared_count& operator=(const shared_count& r){sp_counted_base* tmp=r.pi_;if(tmp!=pi_){if(tmp)_InterlockedIncrement(&tmp->use_count_);if(pi_)pi_->release();pi_=tmp;}return *this;}
    void swap(shared_count& r){sp_counted_base* tmp=r.pi_;r.pi_=pi_;pi_=tmp;}
    shared_count(const shared_count& r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
    ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T> class shared_ptr {
public:
    T* px; detail::shared_count pn;
    shared_ptr():px(0),pn(){}
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

extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*,unsigned,unsigned,long);
struct Script;
struct Editor {void setScript(boost::shared_ptr<Script>);};
struct Window {char padding[0x20];void* handle;};
struct EventArguments {char unused[12];int value;};
struct Listener {
 char padding[0x54];
 Window* window;
 void stopped(EventArguments);
};
void Listener::stopped(EventArguments event){
 if(!event.value){
  Editor* editor=reinterpret_cast<Editor*>(reinterpret_cast<char*>(this)-0xec);
  editor->setScript(boost::shared_ptr<Script>());
  PostMessageA(window->handle,0x10,0,0);
 }
}
