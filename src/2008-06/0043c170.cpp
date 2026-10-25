// from server: 100% by king_originala
// roc 2008-06 0043c170  unit: G3D::VVector3::?$XItem  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043c170
//
// 0043c170  83ec5c               sub esp, 0x5c
// 0043c173  d9ee                 fldz 
// 0043c175  8b442460             mov eax, dword ptr [esp + 0x60]
// 0043c179  8b10                 mov edx, dword ptr [eax]
// 0043c17b  d9542438             fst dword ptr [esp + 0x38]
// 0043c17f  53                   push ebx
// 0043c180  d9542440             fst dword ptr [esp + 0x40]
// 0043c184  55                   push ebp
// 0043c185  d95c2448             fstp dword ptr [esp + 0x48]
// 0043c189  56                   push esi
// 0043c18a  57                   push edi
// 0043c18b  8bf9                 mov edi, ecx
// 0043c18d  8b7710               mov esi, dword ptr [edi + 0x10]
// 0043c190  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043c193  897c2414             mov dword ptr [esp + 0x14], edi
// 0043c197  c644241300           mov byte ptr [esp + 0x13], 0
// 0043c19c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0043c1a0  89542428             mov dword ptr [esp + 0x28], edx
// 0043c1a4  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0043c1a7  7606                 jbe 0x43c1af
// 0043c1a9  ff1590288000         call dword ptr [0x802890]
// 0043c1af  8b6f04               mov ebp, dword ptr [edi + 4]
// 0043c1b2  8bde                 mov ebx, esi
// 0043c1b4  8b7714               mov esi, dword ptr [edi + 0x14]
// 0043c1b7  896c2420             mov dword ptr [esp + 0x20], ebp
// 0043c1bb  895c2424             mov dword ptr [esp + 0x24], ebx
// 0043c1bf  8974241c             mov dword ptr [esp + 0x1c], esi
// 0043c1c3  397710               cmp dword ptr [edi + 0x10], esi
// 0043c1c6  7606                 jbe 0x43c1ce
// 0043c1c8  ff1590288000         call dword ptr [0x802890]
// 0043c1ce  8b4704               mov eax, dword ptr [edi + 4]
// 0043c1d1  89442438             mov dword ptr [esp + 0x38], eax
// 0043c1d5  85ed                 test ebp, ebp
// 0043c1d7  7406                 je 0x43c1df
// 0043c1d9  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 0043c1dd  7406                 je 0x43c1e5
// 0043c1df  ff1590288000         call dword ptr [0x802890]
// 0043c1e5  3bde                 cmp ebx, esi
// 0043c1e7  0f842b020000         je 0x43c418
// 0043c1ed  85ed                 test ebp, ebp
// 0043c1ef  0f8520010000         jne 0x43c315
// 0043c1f5  ff1590288000         call dword ptr [0x802890]
// 0043c1fb  33c0                 xor eax, eax
// 0043c1fd  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043c200  7206                 jb 0x43c208
// 0043c202  ff1590288000         call dword ptr [0x802890]
// 0043c208  8b0b                 mov ecx, dword ptr [ebx]
// 0043c20a  8d542418             lea edx, [esp + 0x18]
// 0043c20e  52                   push edx
// 0043c20f  8d442434             lea eax, [esp + 0x34]
// 0043c213  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0043c217  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0043c21b  50                   push eax
// 0043c21c  e8ffe0ffff           call 0x43a320
// 0043c221  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0043c225  85ff                 test edi, edi
// 0043c227  7406                 je 0x43c22f
// 0043c229  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0043c22d  7406                 je 0x43c235
// 0043c22f  ff1590288000         call dword ptr [0x802890]
// 0043c235  8b742434             mov esi, dword ptr [esp + 0x34]
// 0043c239  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0043c23d  0f846f010000         je 0x43c3b2
// 0043c243  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043c249  85ff                 test edi, edi
// 0043c24b  0f85cc000000         jne 0x43c31d
// 0043c251  ffd3                 call ebx
// 0043c253  33c0                 xor eax, eax
// 0043c255  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043c258  7502                 jne 0x43c25c
// 0043c25a  ffd3                 call ebx
// 0043c25c  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0043c25f  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 0043c262  7602                 jbe 0x43c266
// 0043c264  ffd3                 call ebx
// 0043c266  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0043c269  85ff                 test edi, edi
// 0043c26b  0f85b3000000         jne 0x43c324
// 0043c271  ff1590288000         call dword ptr [0x802890]
// 0043c277  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043c27a  7506                 jne 0x43c282
// 0043c27c  ff1590288000         call dword ptr [0x802890]
// 0043c282  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043c285  897c2418             mov dword ptr [esp + 0x18], edi
// 0043c289  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043c28c  7606                 jbe 0x43c294
// 0043c28e  ff1590288000         call dword ptr [0x802890]
// 0043c294  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043c297  894c2440             mov dword ptr [esp + 0x40], ecx
// 0043c29b  eb03                 jmp 0x43c2a0
// 0043c29d  8d4900               lea ecx, [ecx]
// 0043c2a0  85db                 test ebx, ebx
// 0043c2a2  7406                 je 0x43c2aa
// 0043c2a4  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 0043c2a8  7406                 je 0x43c2b0
// 0043c2aa  ff1590288000         call dword ptr [0x802890]
// 0043c2b0  3bef                 cmp ebp, edi
// 0043c2b2  0f84f2000000         je 0x43c3aa
// 0043c2b8  807c241300           cmp byte ptr [esp + 0x13], 0
// 0043c2bd  7570                 jne 0x43c32f
// 0043c2bf  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043c2c5  85db                 test ebx, ebx
// 0043c2c7  7562                 jne 0x43c32b
// 0043c2c9  ffd7                 call edi
// 0043c2cb  33c0                 xor eax, eax
// 0043c2cd  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043c2d0  7202                 jb 0x43c2d4
// 0043c2d2  ffd7                 call edi
// 0043c2d4  8b4500               mov eax, dword ptr [ebp]
// 0043c2d7  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043c2db  50                   push eax
// 0043c2dc  8d542458             lea edx, [esp + 0x58]
// 0043c2e0  81c6f4feffff         add esi, 0xfffffef4
// 0043c2e6  52                   push edx
// 0043c2e7  8bce                 mov ecx, esi
// 0043c2e9  e8e2fdffff           call 0x43c0d0
// 0043c2ee  d900                 fld dword ptr [eax]
// 0043c2f0  d95c2448             fstp dword ptr [esp + 0x48]
// 0043c2f4  8d4c2448             lea ecx, [esp + 0x48]
// 0043c2f8  d94004               fld dword ptr [eax + 4]
// 0043c2fb  51                   push ecx
// 0043c2fc  d95c2450             fstp dword ptr [esp + 0x50]
// 0043c300  8bce                 mov ecx, esi
// 0043c302  d94008               fld dword ptr [eax + 8]
// 0043c305  8b06                 mov eax, dword ptr [esi]
// 0043c307  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0043c30d  d95c2454             fstp dword ptr [esp + 0x54]
// 0043c311  ffd2                 call edx
// 0043c313  eb6d                 jmp 0x43c382
// 0043c315  8b4500               mov eax, dword ptr [ebp]
// 0043c318  e9e0feffff           jmp 0x43c1fd
// 0043c31d  8b07                 mov eax, dword ptr [edi]
// 0043c31f  e931ffffff           jmp 0x43c255
// 0043c324  8b3f                 mov edi, dword ptr [edi]
// 0043c326  e94cffffff           jmp 0x43c277
// 0043c32b  8b03                 mov eax, dword ptr [ebx]
// 0043c32d  eb9e                 jmp 0x43c2cd
// 0043c32f  85db                 test ebx, ebx
// 0043c331  756f                 jne 0x43c3a2
// 0043c333  ff1590288000         call dword ptr [0x802890]
// 0043c339  33c0                 xor eax, eax
// 0043c33b  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043c33e  7206                 jb 0x43c346
// 0043c340  ff1590288000         call dword ptr [0x802890]
// 0043c346  8b4500               mov eax, dword ptr [ebp]
// 0043c349  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043c34d  8bbef4feffff         mov edi, dword ptr [esi - 0x10c]
// 0043c353  50                   push eax
// 0043c354  81c6f4feffff         add esi, 0xfffffef4
// 0043c35a  8d442464             lea eax, [esp + 0x64]
// 0043c35e  50                   push eax
// 0043c35f  8bce                 mov ecx, esi
// 0043c361  81c7ec000000         add edi, 0xec
// 0043c367  e864fdffff           call 0x43c0d0
// 0043c36c  8b17                 mov edx, dword ptr [edi]
// 0043c36e  50                   push eax
// 0043c36f  8d4c244c             lea ecx, [esp + 0x4c]
// 0043c373  51                   push ecx
// 0043c374  8bce                 mov ecx, esi
// 0043c376  ffd2                 call edx
// 0043c378  84c0                 test al, al
// 0043c37a  7466                 je 0x43c3e2
// 0043c37c  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043c382  c644241301           mov byte ptr [esp + 0x13], 1
// 0043c387  85db                 test ebx, ebx
// 0043c389  751b                 jne 0x43c3a6
// 0043c38b  ffd7                 call edi
// 0043c38d  33c0                 xor eax, eax
// 0043c38f  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043c392  7202                 jb 0x43c396
// 0043c394  ffd7                 call edi
// 0043c396  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0043c39a  83c508               add ebp, 8
// 0043c39d  e9fefeffff           jmp 0x43c2a0
// 0043c3a2  8b03                 mov eax, dword ptr [ebx]
// 0043c3a4  eb95                 jmp 0x43c33b
// 0043c3a6  8b03                 mov eax, dword ptr [ebx]
// 0043c3a8  ebe5                 jmp 0x43c38f
// 0043c3aa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0043c3ae  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043c3b2  85ed                 test ebp, ebp
// 0043c3b4  7527                 jne 0x43c3dd
// 0043c3b6  ff1590288000         call dword ptr [0x802890]
// 0043c3bc  33c0                 xor eax, eax
// 0043c3be  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043c3c1  7206                 jb 0x43c3c9
// 0043c3c3  ff1590288000         call dword ptr [0x802890]
// 0043c3c9  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043c3cd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043c3d1  83c304               add ebx, 4
// 0043c3d4  895c2424             mov dword ptr [esp + 0x24], ebx
// 0043c3d8  e9f8fdffff           jmp 0x43c1d5
// 0043c3dd  8b4500               mov eax, dword ptr [ebp]
// 0043c3e0  ebdc                 jmp 0x43c3be
// 0043c3e2  51                   push ecx
// 0043c3e3  8bcc                 mov ecx, esp
// 0043c3e5  89642474             mov dword ptr [esp + 0x74], esp
// 0043c3e9  6816b78000           push 0x80b716
// 0043c3ee  ff15103f8000         call dword ptr [0x803f10]
// 0043c3f4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043c3f8  81c6f4feffff         add esi, 0xfffffef4
// 0043c3fe  8bce                 mov ecx, esi
// 0043c400  e8eb552d00           call 0x7119f0
// 0043c405  6a00                 push 0
// 0043c407  8bce                 mov ecx, esi
// 0043c409  e8c24c2d00           call 0x7110d0
// 0043c40e  5f                   pop edi
// 0043c40f  5e                   pop esi
// 0043c410  5d                   pop ebp
// 0043c411  5b                   pop ebx
// 0043c412  83c45c               add esp, 0x5c
// 0043c415  c20400               ret 4
// 0043c418  33c0                 xor eax, eax
// 0043c41a  38442413             cmp byte ptr [esp + 0x13], al
// 0043c41e  8d8ff4feffff         lea ecx, [edi - 0x10c]
// 0043c424  0f94c0               sete al
// 0043c427  50                   push eax
// 0043c428  e8a34c2d00           call 0x7110d0
// 0043c42d  5f                   pop edi
// 0043c42e  5e                   pop esi
// 0043c42f  5d                   pop ebp
// 0043c430  5b                   pop ebx
// 0043c431  83c45c               add esp, 0x5c
// 0043c434  c20400               ret 4

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
 virtual void setCommon(const G3D::Vector3&);
 virtual bool equals(const G3D::Vector3&,const G3D::Vector3&);
 char padding[0x108];
 G3D::Vector3 value(Instance*);
 void SetValue(CString);
 void SetHidden(int);
};
struct UpdateBase {virtual void update(Selection&);std::vector<const ClassDescriptor*> classes;};
struct XItem:GridBase,UpdateBase {void update(Selection&);};
void XItem::update(Selection& selection){
 G3D::Vector3 common;
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
