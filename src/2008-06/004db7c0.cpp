// from server: 88% by coldek
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
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
    __forceinline void reset(){shared_ptr().swap(*this);}
    typedef T* shared_ptr::*unspecified_bool_type;
    operator unspecified_bool_type()const{return px==0?0:&shared_ptr::px;}
    shared_ptr(const shared_ptr& r):px(r.px),pn(r.pn){}
    template<class Y> shared_ptr(const shared_ptr<Y>& r):px(r.px),pn(r.pn){}
    T* get()const{return px;}
    T* operator->()const{return px;}
};
template<class T,class U> bool operator==(const shared_ptr<T>& a,const shared_ptr<U>& b){return a.get()==b.get();}
}

namespace RBX {
class Instance {public:virtual ~Instance();char prefix[0x100];Instance*parent;Instance*getParent()const{return parent;}};
class PartInstance:public Instance {};
class Texture:public Instance {};
class Decal:public Instance {};
boost::shared_ptr<PartInstance> __cdecl shared_from(PartInstance*);
namespace ViewNew {
class ViewRbxGfx;
class Part {char storage[0xf0];public:Part(const boost::shared_ptr<PartInstance>&,ViewRbxGfx*);};
class Texture {char storage[0x108];public:Texture(RBX::Texture&,PartInstance&,ViewRbxGfx*);};
class Decal {char storage[0x108];public:Decal(RBX::Decal&,PartInstance&,ViewRbxGfx*);};
class ViewRbxGfx {public:void onWorkspaceDescendentAdded(boost::shared_ptr<Instance>);};
void ViewRbxGfx::onWorkspaceDescendentAdded(boost::shared_ptr<Instance>instance){
 if(PartInstance*part=dynamic_cast<PartInstance*>(instance.get())){
  new Part(shared_from(part),this);
  instance.reset();
  return;
 }
 {
  PartInstance*parent=dynamic_cast<PartInstance*>(instance->getParent());
  RBX::Texture*texture;
  if(parent && (texture=dynamic_cast<RBX::Texture*>(instance.get()))){
   new Texture(*texture,*parent,this);
  }else if(RBX::Decal*decal=dynamic_cast<RBX::Decal*>(instance.get())){
   new Decal(*decal,*dynamic_cast<PartInstance*>(decal->getParent()),this);
  }
 }
}
}}
