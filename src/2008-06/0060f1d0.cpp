// from server: 98% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <vector>
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

namespace boost {
namespace detail {struct weak_count {sp_counted_base* pi_;~weak_count(){if(pi_)pi_->weak_release();}};}
template<class T>class weak_ptr {T* px;detail::weak_count pn;public:shared_ptr<T> lock()const;};
}
namespace G3D {
struct CoordinateFrame {float rotation[9];float translation[3];CoordinateFrame toObjectSpace(const CoordinateFrame&)const;CoordinateFrame toWorldSpace(const CoordinateFrame&)const;};
}
namespace RBX {
class PartInstance {public:const G3D::CoordinateFrame& getCoordinateFrame()const;void setCoordinateFrame(const G3D::CoordinateFrame&);};
void __cdecl validateFrame(G3D::CoordinateFrame&);
void __cdecl transformParts(const std::vector<boost::weak_ptr<PartInstance> >& parts,G3D::CoordinateFrame oldFrame,G3D::CoordinateFrame newFrame){
 for(unsigned i=0;i<parts.size();++i){
  boost::shared_ptr<PartInstance> part=parts[i].lock();
  if(part){
   PartInstance* object=part.get();
   G3D::CoordinateFrame relative=oldFrame.toObjectSpace(object->getCoordinateFrame());
   validateFrame(relative);
   object->setCoordinateFrame(newFrame.toWorldSpace(relative));
  }
 }
}
}
