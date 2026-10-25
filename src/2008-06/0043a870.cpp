// from server: 100% by king_originala
// roc 2008-06 0043a870  unit: MVCXTPPropertyGridItem::?$XItem  size: 671 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043a870
//
// 0043a870  83ec40               sub esp, 0x40
// 0043a873  8b442444             mov eax, dword ptr [esp + 0x44]
// 0043a877  8b10                 mov edx, dword ptr [eax]
// 0043a879  53                   push ebx
// 0043a87a  55                   push ebp
// 0043a87b  56                   push esi
// 0043a87c  57                   push edi
// 0043a87d  8bf9                 mov edi, ecx
// 0043a87f  8b7710               mov esi, dword ptr [edi + 0x10]
// 0043a882  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043a885  897c2414             mov dword ptr [esp + 0x14], edi
// 0043a889  c644241300           mov byte ptr [esp + 0x13], 0
// 0043a88e  894c2434             mov dword ptr [esp + 0x34], ecx
// 0043a892  89542430             mov dword ptr [esp + 0x30], edx
// 0043a896  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0043a899  7606                 jbe 0x43a8a1
// 0043a89b  ff1590288000         call dword ptr [0x802890]
// 0043a8a1  8b6f04               mov ebp, dword ptr [edi + 4]
// 0043a8a4  8bde                 mov ebx, esi
// 0043a8a6  8b7714               mov esi, dword ptr [edi + 0x14]
// 0043a8a9  896c2428             mov dword ptr [esp + 0x28], ebp
// 0043a8ad  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0043a8b1  89742424             mov dword ptr [esp + 0x24], esi
// 0043a8b5  397710               cmp dword ptr [edi + 0x10], esi
// 0043a8b8  7606                 jbe 0x43a8c0
// 0043a8ba  ff1590288000         call dword ptr [0x802890]
// 0043a8c0  8b4704               mov eax, dword ptr [edi + 4]
// 0043a8c3  89442440             mov dword ptr [esp + 0x40], eax
// 0043a8c7  85ed                 test ebp, ebp
// 0043a8c9  7406                 je 0x43a8d1
// 0043a8cb  3b6c2440             cmp ebp, dword ptr [esp + 0x40]
// 0043a8cf  7406                 je 0x43a8d7
// 0043a8d1  ff1590288000         call dword ptr [0x802890]
// 0043a8d7  3bde                 cmp ebx, esi
// 0043a8d9  0f8411020000         je 0x43aaf0
// 0043a8df  85ed                 test ebp, ebp
// 0043a8e1  0f8509010000         jne 0x43a9f0
// 0043a8e7  ff1590288000         call dword ptr [0x802890]
// 0043a8ed  33c0                 xor eax, eax
// 0043a8ef  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043a8f2  7206                 jb 0x43a8fa
// 0043a8f4  ff1590288000         call dword ptr [0x802890]
// 0043a8fa  8b0b                 mov ecx, dword ptr [ebx]
// 0043a8fc  8d54241c             lea edx, [esp + 0x1c]
// 0043a900  52                   push edx
// 0043a901  8d44243c             lea eax, [esp + 0x3c]
// 0043a905  894c2420             mov dword ptr [esp + 0x20], ecx
// 0043a909  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0043a90d  50                   push eax
// 0043a90e  e80dfaffff           call 0x43a320
// 0043a913  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0043a917  85ff                 test edi, edi
// 0043a919  7406                 je 0x43a921
// 0043a91b  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 0043a91f  7406                 je 0x43a927
// 0043a921  ff1590288000         call dword ptr [0x802890]
// 0043a927  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0043a92b  3b742434             cmp esi, dword ptr [esp + 0x34]
// 0043a92f  0f8455010000         je 0x43aa8a
// 0043a935  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043a93b  85ff                 test edi, edi
// 0043a93d  0f85b5000000         jne 0x43a9f8
// 0043a943  ffd3                 call ebx
// 0043a945  33c0                 xor eax, eax
// 0043a947  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043a94a  7502                 jne 0x43a94e
// 0043a94c  ffd3                 call ebx
// 0043a94e  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0043a951  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 0043a954  7602                 jbe 0x43a958
// 0043a956  ffd3                 call ebx
// 0043a958  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0043a95b  85ff                 test edi, edi
// 0043a95d  0f859c000000         jne 0x43a9ff
// 0043a963  ff1590288000         call dword ptr [0x802890]
// 0043a969  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043a96c  7506                 jne 0x43a974
// 0043a96e  ff1590288000         call dword ptr [0x802890]
// 0043a974  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043a977  897c241c             mov dword ptr [esp + 0x1c], edi
// 0043a97b  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043a97e  7606                 jbe 0x43a986
// 0043a980  ff1590288000         call dword ptr [0x802890]
// 0043a986  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043a989  894c2448             mov dword ptr [esp + 0x48], ecx
// 0043a98d  8d4900               lea ecx, [ecx]
// 0043a990  85db                 test ebx, ebx
// 0043a992  7406                 je 0x43a99a
// 0043a994  3b5c2448             cmp ebx, dword ptr [esp + 0x48]
// 0043a998  7406                 je 0x43a9a0
// 0043a99a  ff1590288000         call dword ptr [0x802890]
// 0043a9a0  3bef                 cmp ebp, edi
// 0043a9a2  0f84da000000         je 0x43aa82
// 0043a9a8  807c241300           cmp byte ptr [esp + 0x13], 0
// 0043a9ad  755b                 jne 0x43aa0a
// 0043a9af  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043a9b5  85db                 test ebx, ebx
// 0043a9b7  754d                 jne 0x43aa06
// 0043a9b9  ffd7                 call edi
// 0043a9bb  33c0                 xor eax, eax
// 0043a9bd  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043a9c0  7202                 jb 0x43a9c4
// 0043a9c2  ffd7                 call edi
// 0043a9c4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043a9c8  8b4500               mov eax, dword ptr [ebp]
// 0043a9cb  81c6f4feffff         add esi, 0xfffffef4
// 0043a9d1  50                   push eax
// 0043a9d2  8bce                 mov ecx, esi
// 0043a9d4  e857fdffff           call 0x43a730
// 0043a9d9  d95c2418             fstp dword ptr [esp + 0x18]
// 0043a9dd  8b16                 mov edx, dword ptr [esi]
// 0043a9df  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0043a9e5  8d442418             lea eax, [esp + 0x18]
// 0043a9e9  50                   push eax
// 0043a9ea  8bce                 mov ecx, esi
// 0043a9ec  ffd2                 call edx
// 0043a9ee  eb6a                 jmp 0x43aa5a
// 0043a9f0  8b4500               mov eax, dword ptr [ebp]
// 0043a9f3  e9f7feffff           jmp 0x43a8ef
// 0043a9f8  8b07                 mov eax, dword ptr [edi]
// 0043a9fa  e948ffffff           jmp 0x43a947
// 0043a9ff  8b3f                 mov edi, dword ptr [edi]
// 0043aa01  e963ffffff           jmp 0x43a969
// 0043aa06  8b03                 mov eax, dword ptr [ebx]
// 0043aa08  ebb3                 jmp 0x43a9bd
// 0043aa0a  85db                 test ebx, ebx
// 0043aa0c  756c                 jne 0x43aa7a
// 0043aa0e  ff1590288000         call dword ptr [0x802890]
// 0043aa14  33c0                 xor eax, eax
// 0043aa16  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043aa19  7206                 jb 0x43aa21
// 0043aa1b  ff1590288000         call dword ptr [0x802890]
// 0043aa21  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043aa25  8b4500               mov eax, dword ptr [ebp]
// 0043aa28  81c6f4feffff         add esi, 0xfffffef4
// 0043aa2e  50                   push eax
// 0043aa2f  8bce                 mov ecx, esi
// 0043aa31  e8fafcffff           call 0x43a730
// 0043aa36  d95c2420             fstp dword ptr [esp + 0x20]
// 0043aa3a  8b06                 mov eax, dword ptr [esi]
// 0043aa3c  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0043aa42  8d4c2420             lea ecx, [esp + 0x20]
// 0043aa46  51                   push ecx
// 0043aa47  8d54241c             lea edx, [esp + 0x1c]
// 0043aa4b  52                   push edx
// 0043aa4c  8bce                 mov ecx, esi
// 0043aa4e  ffd0                 call eax
// 0043aa50  84c0                 test al, al
// 0043aa52  7466                 je 0x43aaba
// 0043aa54  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043aa5a  c644241301           mov byte ptr [esp + 0x13], 1
// 0043aa5f  85db                 test ebx, ebx
// 0043aa61  751b                 jne 0x43aa7e
// 0043aa63  ffd7                 call edi
// 0043aa65  33c0                 xor eax, eax
// 0043aa67  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043aa6a  7202                 jb 0x43aa6e
// 0043aa6c  ffd7                 call edi
// 0043aa6e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0043aa72  83c508               add ebp, 8
// 0043aa75  e916ffffff           jmp 0x43a990
// 0043aa7a  8b03                 mov eax, dword ptr [ebx]
// 0043aa7c  eb98                 jmp 0x43aa16
// 0043aa7e  8b03                 mov eax, dword ptr [ebx]
// 0043aa80  ebe5                 jmp 0x43aa67
// 0043aa82  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0043aa86  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0043aa8a  85ed                 test ebp, ebp
// 0043aa8c  7527                 jne 0x43aab5
// 0043aa8e  ff1590288000         call dword ptr [0x802890]
// 0043aa94  33c0                 xor eax, eax
// 0043aa96  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043aa99  7206                 jb 0x43aaa1
// 0043aa9b  ff1590288000         call dword ptr [0x802890]
// 0043aaa1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043aaa5  8b742424             mov esi, dword ptr [esp + 0x24]
// 0043aaa9  83c304               add ebx, 4
// 0043aaac  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0043aab0  e912feffff           jmp 0x43a8c7
// 0043aab5  8b4500               mov eax, dword ptr [ebp]
// 0043aab8  ebdc                 jmp 0x43aa96
// 0043aaba  51                   push ecx
// 0043aabb  8bcc                 mov ecx, esp
// 0043aabd  89642458             mov dword ptr [esp + 0x58], esp
// 0043aac1  6816b78000           push 0x80b716
// 0043aac6  ff15103f8000         call dword ptr [0x803f10]
// 0043aacc  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043aad0  81c6f4feffff         add esi, 0xfffffef4
// 0043aad6  8bce                 mov ecx, esi
// 0043aad8  e8136f2d00           call 0x7119f0
// 0043aadd  6a00                 push 0
// 0043aadf  8bce                 mov ecx, esi
// 0043aae1  e8ea652d00           call 0x7110d0
// 0043aae6  5f                   pop edi
// 0043aae7  5e                   pop esi
// 0043aae8  5d                   pop ebp
// 0043aae9  5b                   pop ebx
// 0043aaea  83c440               add esp, 0x40
// 0043aaed  c20400               ret 4
// 0043aaf0  33c9                 xor ecx, ecx
// 0043aaf2  384c2413             cmp byte ptr [esp + 0x13], cl
// 0043aaf6  0f94c1               sete cl
// 0043aaf9  51                   push ecx
// 0043aafa  8d8ff4feffff         lea ecx, [edi - 0x10c]
// 0043ab00  e8cb652d00           call 0x7110d0
// 0043ab05  5f                   pop edi
// 0043ab06  5e                   pop esi
// 0043ab07  5d                   pop ebp
// 0043ab08  5b                   pop ebx
// 0043ab09  83c440               add esp, 0x40
// 0043ab0c  c20400               ret 4

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
 virtual void setCommon(const float&);
 virtual bool equals(const float&,const float&);
 char padding[0x108];
 float value(Instance*);
 void SetValue(CString);
 void SetHidden(int);
};
struct UpdateBase {virtual void update(Selection&);std::vector<const ClassDescriptor*> classes;};
struct XItem:GridBase,UpdateBase {void update(Selection&);};
void XItem::update(Selection& selection){
 float common;
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
