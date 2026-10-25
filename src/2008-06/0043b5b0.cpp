// from server: 100% by king_originala
// roc 2008-06 0043b5b0  unit: RBX::VBrickColor::?$XItem  size: 687 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b5b0
//
// 0043b5b0  83ec44               sub esp, 0x44
// 0043b5b3  8b442448             mov eax, dword ptr [esp + 0x48]
// 0043b5b7  8b10                 mov edx, dword ptr [eax]
// 0043b5b9  53                   push ebx
// 0043b5ba  55                   push ebp
// 0043b5bb  56                   push esi
// 0043b5bc  57                   push edi
// 0043b5bd  8bf9                 mov edi, ecx
// 0043b5bf  8b7710               mov esi, dword ptr [edi + 0x10]
// 0043b5c2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043b5c5  897c2414             mov dword ptr [esp + 0x14], edi
// 0043b5c9  c7442418c2000000     mov dword ptr [esp + 0x18], 0xc2
// 0043b5d1  c644241300           mov byte ptr [esp + 0x13], 0
// 0043b5d6  894c2438             mov dword ptr [esp + 0x38], ecx
// 0043b5da  89542434             mov dword ptr [esp + 0x34], edx
// 0043b5de  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0043b5e1  7606                 jbe 0x43b5e9
// 0043b5e3  ff1590288000         call dword ptr [0x802890]
// 0043b5e9  8b6f04               mov ebp, dword ptr [edi + 4]
// 0043b5ec  8bde                 mov ebx, esi
// 0043b5ee  8b7714               mov esi, dword ptr [edi + 0x14]
// 0043b5f1  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0043b5f5  895c2430             mov dword ptr [esp + 0x30], ebx
// 0043b5f9  89742420             mov dword ptr [esp + 0x20], esi
// 0043b5fd  397710               cmp dword ptr [edi + 0x10], esi
// 0043b600  7606                 jbe 0x43b608
// 0043b602  ff1590288000         call dword ptr [0x802890]
// 0043b608  8b4704               mov eax, dword ptr [edi + 4]
// 0043b60b  89442444             mov dword ptr [esp + 0x44], eax
// 0043b60f  90                   nop 
// 0043b610  85ed                 test ebp, ebp
// 0043b612  7406                 je 0x43b61a
// 0043b614  3b6c2444             cmp ebp, dword ptr [esp + 0x44]
// 0043b618  7406                 je 0x43b620
// 0043b61a  ff1590288000         call dword ptr [0x802890]
// 0043b620  3bde                 cmp ebx, esi
// 0043b622  0f8418020000         je 0x43b840
// 0043b628  85ed                 test ebp, ebp
// 0043b62a  0f850d010000         jne 0x43b73d
// 0043b630  ff1590288000         call dword ptr [0x802890]
// 0043b636  33c0                 xor eax, eax
// 0043b638  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043b63b  7206                 jb 0x43b643
// 0043b63d  ff1590288000         call dword ptr [0x802890]
// 0043b643  8b0b                 mov ecx, dword ptr [ebx]
// 0043b645  8d54241c             lea edx, [esp + 0x1c]
// 0043b649  52                   push edx
// 0043b64a  8d442440             lea eax, [esp + 0x40]
// 0043b64e  894c2420             mov dword ptr [esp + 0x20], ecx
// 0043b652  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0043b656  50                   push eax
// 0043b657  e8c4ecffff           call 0x43a320
// 0043b65c  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0043b660  85ff                 test edi, edi
// 0043b662  7406                 je 0x43b66a
// 0043b664  3b7c2434             cmp edi, dword ptr [esp + 0x34]
// 0043b668  7406                 je 0x43b670
// 0043b66a  ff1590288000         call dword ptr [0x802890]
// 0043b670  8b742440             mov esi, dword ptr [esp + 0x40]
// 0043b674  3b742438             cmp esi, dword ptr [esp + 0x38]
// 0043b678  0f845c010000         je 0x43b7da
// 0043b67e  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043b684  85ff                 test edi, edi
// 0043b686  0f85b9000000         jne 0x43b745
// 0043b68c  ffd3                 call ebx
// 0043b68e  33c0                 xor eax, eax
// 0043b690  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043b693  7502                 jne 0x43b697
// 0043b695  ffd3                 call ebx
// 0043b697  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0043b69a  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 0043b69d  7602                 jbe 0x43b6a1
// 0043b69f  ffd3                 call ebx
// 0043b6a1  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0043b6a4  85ff                 test edi, edi
// 0043b6a6  0f85a0000000         jne 0x43b74c
// 0043b6ac  ff1590288000         call dword ptr [0x802890]
// 0043b6b2  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043b6b5  7506                 jne 0x43b6bd
// 0043b6b7  ff1590288000         call dword ptr [0x802890]
// 0043b6bd  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043b6c0  897c241c             mov dword ptr [esp + 0x1c], edi
// 0043b6c4  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043b6c7  7606                 jbe 0x43b6cf
// 0043b6c9  ff1590288000         call dword ptr [0x802890]
// 0043b6cf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043b6d2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0043b6d6  85db                 test ebx, ebx
// 0043b6d8  7406                 je 0x43b6e0
// 0043b6da  3b5c244c             cmp ebx, dword ptr [esp + 0x4c]
// 0043b6de  7406                 je 0x43b6e6
// 0043b6e0  ff1590288000         call dword ptr [0x802890]
// 0043b6e6  3bef                 cmp ebp, edi
// 0043b6e8  0f84e4000000         je 0x43b7d2
// 0043b6ee  807c241300           cmp byte ptr [esp + 0x13], 0
// 0043b6f3  7562                 jne 0x43b757
// 0043b6f5  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043b6fb  85db                 test ebx, ebx
// 0043b6fd  7554                 jne 0x43b753
// 0043b6ff  ffd7                 call edi
// 0043b701  33c0                 xor eax, eax
// 0043b703  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043b706  7202                 jb 0x43b70a
// 0043b708  ffd7                 call edi
// 0043b70a  8b4500               mov eax, dword ptr [ebp]
// 0043b70d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043b711  50                   push eax
// 0043b712  8d542428             lea edx, [esp + 0x28]
// 0043b716  81c6e8feffff         add esi, 0xfffffee8
// 0043b71c  52                   push edx
// 0043b71d  8bce                 mov ecx, esi
// 0043b71f  e8ecfdffff           call 0x43b510
// 0043b724  8b00                 mov eax, dword ptr [eax]
// 0043b726  8b16                 mov edx, dword ptr [esi]
// 0043b728  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 0043b72e  89442418             mov dword ptr [esp + 0x18], eax
// 0043b732  8d442418             lea eax, [esp + 0x18]
// 0043b736  50                   push eax
// 0043b737  8bce                 mov ecx, esi
// 0043b739  ffd2                 call edx
// 0043b73b  eb6d                 jmp 0x43b7aa
// 0043b73d  8b4500               mov eax, dword ptr [ebp]
// 0043b740  e9f3feffff           jmp 0x43b638
// 0043b745  8b07                 mov eax, dword ptr [edi]
// 0043b747  e944ffffff           jmp 0x43b690
// 0043b74c  8b3f                 mov edi, dword ptr [edi]
// 0043b74e  e95fffffff           jmp 0x43b6b2
// 0043b753  8b03                 mov eax, dword ptr [ebx]
// 0043b755  ebac                 jmp 0x43b703
// 0043b757  85db                 test ebx, ebx
// 0043b759  756f                 jne 0x43b7ca
// 0043b75b  ff1590288000         call dword ptr [0x802890]
// 0043b761  33c0                 xor eax, eax
// 0043b763  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043b766  7206                 jb 0x43b76e
// 0043b768  ff1590288000         call dword ptr [0x802890]
// 0043b76e  8b4500               mov eax, dword ptr [ebp]
// 0043b771  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043b775  8bbee8feffff         mov edi, dword ptr [esi - 0x118]
// 0043b77b  50                   push eax
// 0043b77c  81c6e8feffff         add esi, 0xfffffee8
// 0043b782  8d44242c             lea eax, [esp + 0x2c]
// 0043b786  50                   push eax
// 0043b787  8bce                 mov ecx, esi
// 0043b789  81c7f8000000         add edi, 0xf8
// 0043b78f  e87cfdffff           call 0x43b510
// 0043b794  8b17                 mov edx, dword ptr [edi]
// 0043b796  50                   push eax
// 0043b797  8d4c241c             lea ecx, [esp + 0x1c]
// 0043b79b  51                   push ecx
// 0043b79c  8bce                 mov ecx, esi
// 0043b79e  ffd2                 call edx
// 0043b7a0  84c0                 test al, al
// 0043b7a2  7466                 je 0x43b80a
// 0043b7a4  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043b7aa  c644241301           mov byte ptr [esp + 0x13], 1
// 0043b7af  85db                 test ebx, ebx
// 0043b7b1  751b                 jne 0x43b7ce
// 0043b7b3  ffd7                 call edi
// 0043b7b5  33c0                 xor eax, eax
// 0043b7b7  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043b7ba  7202                 jb 0x43b7be
// 0043b7bc  ffd7                 call edi
// 0043b7be  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043b7c2  83c508               add ebp, 8
// 0043b7c5  e90cffffff           jmp 0x43b6d6
// 0043b7ca  8b03                 mov eax, dword ptr [ebx]
// 0043b7cc  eb95                 jmp 0x43b763
// 0043b7ce  8b03                 mov eax, dword ptr [ebx]
// 0043b7d0  ebe5                 jmp 0x43b7b7
// 0043b7d2  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0043b7d6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0043b7da  85ed                 test ebp, ebp
// 0043b7dc  7527                 jne 0x43b805
// 0043b7de  ff1590288000         call dword ptr [0x802890]
// 0043b7e4  33c0                 xor eax, eax
// 0043b7e6  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043b7e9  7206                 jb 0x43b7f1
// 0043b7eb  ff1590288000         call dword ptr [0x802890]
// 0043b7f1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043b7f5  8b742420             mov esi, dword ptr [esp + 0x20]
// 0043b7f9  83c304               add ebx, 4
// 0043b7fc  895c2430             mov dword ptr [esp + 0x30], ebx
// 0043b800  e90bfeffff           jmp 0x43b610
// 0043b805  8b4500               mov eax, dword ptr [ebp]
// 0043b808  ebdc                 jmp 0x43b7e6
// 0043b80a  51                   push ecx
// 0043b80b  8bcc                 mov ecx, esp
// 0043b80d  8964245c             mov dword ptr [esp + 0x5c], esp
// 0043b811  6816b78000           push 0x80b716
// 0043b816  ff15103f8000         call dword ptr [0x803f10]
// 0043b81c  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043b820  81c6e8feffff         add esi, 0xfffffee8
// 0043b826  8bce                 mov ecx, esi
// 0043b828  e8c3612d00           call 0x7119f0
// 0043b82d  6a00                 push 0
// 0043b82f  8bce                 mov ecx, esi
// 0043b831  e89a582d00           call 0x7110d0
// 0043b836  5f                   pop edi
// 0043b837  5e                   pop esi
// 0043b838  5d                   pop ebp
// 0043b839  5b                   pop ebx
// 0043b83a  83c444               add esp, 0x44
// 0043b83d  c20400               ret 4
// 0043b840  33c0                 xor eax, eax
// 0043b842  38442413             cmp byte ptr [esp + 0x13], al
// 0043b846  8d8fe8feffff         lea ecx, [edi - 0x118]
// 0043b84c  0f94c0               sete al
// 0043b84f  50                   push eax
// 0043b850  e87b582d00           call 0x7110d0
// 0043b855  5f                   pop edi
// 0043b856  5e                   pop esi
// 0043b857  5d                   pop ebp
// 0043b858  5b                   pop ebx
// 0043b859  83c444               add esp, 0x44
// 0043b85c  c20400               ret 4

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

#include <vector>
#include <map>
namespace G3D {struct Vector3 {float x,y,z;Vector3():x(0),y(0),z(0){}Vector3(float a,float b,float c):x(a),y(b),z(c){}Vector3(const Vector3&v):x(v.x),y(v.y),z(v.z){}Vector3& operator=(const Vector3&v){x=v.x;y=v.y;z=v.z;return *this;}};}
namespace G3D {struct BrickColor {int number;BrickColor():number(194){}BrickColor(const BrickColor&v):number(v.number){}BrickColor&operator=(const BrickColor&v){number=v.number;return *this;}};}
struct Instance;
struct ClassDescriptor;
typedef std::vector<boost::shared_ptr<Instance> > Instances;
typedef std::map<const ClassDescriptor*,Instances> Selection;
struct __declspec(dllimport) CString {void* data;CString(const char*);CString(const CString&);~CString();};
struct GridBase {virtual ~GridBase();
virtual void slot1();
virtual void slot2();
virtual void slot3();
virtual void slot4();
virtual void slot5();
virtual void slot6();
virtual void slot7();
virtual void slot8();
virtual void slot9();
virtual void slot10();
virtual void slot11();
virtual void slot12();
virtual void slot13();
virtual void slot14();
virtual void slot15();
virtual void slot16();
virtual void slot17();
virtual void slot18();
virtual void slot19();
virtual void slot20();
virtual void slot21();
virtual void slot22();
virtual void slot23();
virtual void slot24();
virtual void slot25();
virtual void slot26();
virtual void slot27();
virtual void slot28();
virtual void slot29();
virtual void slot30();
virtual void slot31();
virtual void slot32();
virtual void slot33();
virtual void slot34();
virtual void slot35();
virtual void slot36();
virtual void slot37();
virtual void slot38();
virtual void slot39();
virtual void slot40();
virtual void slot41();
virtual void slot42();
virtual void slot43();
virtual void slot44();
virtual void slot45();
virtual void slot46();
virtual void slot47();
virtual void slot48();
virtual void slot49();
virtual void slot50();
virtual void slot51();
virtual void slot52();
virtual void slot53();
virtual void slot54();
virtual void slot55();
virtual void slot56();
virtual void slot57();
virtual void slot58();
virtual void slot59();
virtual void slot60();
 virtual void setCommon(const G3D::BrickColor&);
 virtual bool equals(const G3D::BrickColor&,const G3D::BrickColor&);
 char padding[0x114];
 G3D::BrickColor value(Instance*);
 void SetValue(CString);
 void SetHidden(int);
};
struct UpdateBase {virtual void update(Selection&);std::vector<const ClassDescriptor*> classes;};
struct XItem:GridBase,UpdateBase {void update(Selection&);};
void XItem::update(Selection& selection){
 G3D::BrickColor common;
 bool foundAny=false;
 Selection::iterator selectionEnd=selection.end();
 for(std::vector<const ClassDescriptor*>::const_iterator c=classes.begin(),ce=classes.end();c!=ce;++c){
  const ClassDescriptor* key=*c;
  Selection::iterator selected=selection.find(key);
  if(selected!=selectionEnd){
   for(Instances::iterator i=selected->second.begin(),end=selected->second.end();i!=end;++i){
    if(!foundAny){common=value(i->get());setCommon(common);}
    else if(!equals(common,value(i->get()))){
     SetValue(CString(""));
     SetHidden(0);return;
    }
    foundAny=true;
   }
  }
 }
 SetHidden(!foundAny);
}
