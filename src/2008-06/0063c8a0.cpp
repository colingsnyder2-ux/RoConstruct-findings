// from server: 100% by Espeon
// roc 2008-06 0063c8a0  unit: RBX::VSeat::?$FactoryProduct  size: 829 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c8a0
//
// 0063c8a0  6aff                 push -1
// 0063c8a2  68e7a67d00           push 0x7da6e7
// 0063c8a7  64a100000000         mov eax, dword ptr fs:[0]
// 0063c8ad  50                   push eax
// 0063c8ae  64892500000000       mov dword ptr fs:[0], esp
// 0063c8b5  81ecd8010000         sub esp, 0x1d8
// 0063c8bb  53                   push ebx
// 0063c8bc  55                   push ebp
// 0063c8bd  56                   push esi
// 0063c8be  57                   push edi
// 0063c8bf  8bf1                 mov esi, ecx
// 0063c8c1  e8eac3f5ff           call 0x598cb0
// 0063c8c6  8bf8                 mov edi, eax
// 0063c8c8  57                   push edi
// 0063c8c9  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0063c8d0  e84b69edff           call 0x513220
// 0063c8d5  d94724               fld dword ptr [edi + 0x24]
// 0063c8d8  d99c24bc000000       fstp dword ptr [esp + 0xbc]
// 0063c8df  8d4c241c             lea ecx, [esp + 0x1c]
// 0063c8e3  d94728               fld dword ptr [edi + 0x28]
// 0063c8e6  d99c24c0000000       fstp dword ptr [esp + 0xc0]
// 0063c8ed  d9472c               fld dword ptr [edi + 0x2c]
// 0063c8f0  d99c24c4000000       fstp dword ptr [esp + 0xc4]
// 0063c8f7  e8d4b9e3ff           call 0x4782d0
// 0063c8fc  d9ee                 fldz 
// 0063c8fe  83ec0c               sub esp, 0xc
// 0063c901  8bc4                 mov eax, esp
// 0063c903  8964241c             mov dword ptr [esp + 0x1c], esp
// 0063c907  d910                 fst dword ptr [eax]
// 0063c909  d95004               fst dword ptr [eax + 4]
// 0063c90c  8d4c2428             lea ecx, [esp + 0x28]
// 0063c910  d905b8c38100         fld dword ptr [0x81c3b8]
// 0063c916  d95008               fst dword ptr [eax + 8]
// 0063c919  8d44241c             lea eax, [esp + 0x1c]
// 0063c91d  d95c2420             fstp dword ptr [esp + 0x20]
// 0063c921  50                   push eax
// 0063c922  d9542420             fst dword ptr [esp + 0x20]
// 0063c926  d95c2428             fstp dword ptr [esp + 0x28]
// 0063c92a  e861c2edff           call 0x518b90
// 0063c92f  d9ee                 fldz 
// 0063c931  8d4c244c             lea ecx, [esp + 0x4c]
// 0063c935  d9542440             fst dword ptr [esp + 0x40]
// 0063c939  d90580e38100         fld dword ptr [0x81e380]
// 0063c93f  d95c2444             fstp dword ptr [esp + 0x44]
// 0063c943  d95c2448             fstp dword ptr [esp + 0x48]
// 0063c947  e884b9e3ff           call 0x4782d0
// 0063c94c  d9ee                 fldz 
// 0063c94e  83ec0c               sub esp, 0xc
// 0063c951  8964241c             mov dword ptr [esp + 0x1c], esp
// 0063c955  8bc4                 mov eax, esp
// 0063c957  d910                 fst dword ptr [eax]
// 0063c959  8d4c241c             lea ecx, [esp + 0x1c]
// 0063c95d  d95004               fst dword ptr [eax + 4]
// 0063c960  51                   push ecx
// 0063c961  d905b8c38100         fld dword ptr [0x81c3b8]
// 0063c967  8d4c245c             lea ecx, [esp + 0x5c]
// 0063c96b  d95008               fst dword ptr [eax + 8]
// 0063c96e  d95c2424             fstp dword ptr [esp + 0x24]
// 0063c972  d9542420             fst dword ptr [esp + 0x20]
// 0063c976  d95c2428             fstp dword ptr [esp + 0x28]
// 0063c97a  e811c2edff           call 0x518b90
// 0063c97f  d9ee                 fldz 
// 0063c981  8d54241c             lea edx, [esp + 0x1c]
// 0063c985  d9542470             fst dword ptr [esp + 0x70]
// 0063c989  52                   push edx
// 0063c98a  d90538f88200         fld dword ptr [0x82f838]
// 0063c990  8d84242c010000       lea eax, [esp + 0x12c]
// 0063c997  d95c2478             fstp dword ptr [esp + 0x78]
// 0063c99b  50                   push eax
// 0063c99c  8bce                 mov ecx, esi
// 0063c99e  d99c2480000000       fstp dword ptr [esp + 0x80]
// 0063c9a5  e806c3f5ff           call 0x598cb0
// 0063c9aa  8bc8                 mov ecx, eax
// 0063c9ac  e84f9de3ff           call 0x476700
// 0063c9b1  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 0063c9b8  51                   push ecx
// 0063c9b9  8d4c2450             lea ecx, [esp + 0x50]
// 0063c9bd  e86eb9e3ff           call 0x478330
// 0063c9c2  50                   push eax
// 0063c9c3  8d9424cc000000       lea edx, [esp + 0xcc]
// 0063c9ca  52                   push edx
// 0063c9cb  8d8c2430010000       lea ecx, [esp + 0x130]
// 0063c9d2  e8299de3ff           call 0x476700
// 0063c9d7  8bac24f8010000       mov ebp, dword ptr [esp + 0x1f8]
// 0063c9de  8bcd                 mov ecx, ebp
// 0063c9e0  e8bbc6f9ff           call 0x5d90a0
// 0063c9e5  8bf8                 mov edi, eax
// 0063c9e7  8bcf                 mov ecx, edi
// 0063c9e9  e882abfaff           call 0x5e7570
// 0063c9ee  8b4024               mov eax, dword ptr [eax + 0x24]
// 0063c9f1  8b581c               mov ebx, dword ptr [eax + 0x1c]
// 0063c9f4  3bdf                 cmp ebx, edi
// 0063c9f6  752d                 jne 0x63ca25
// 0063c9f8  8d8c24c8000000       lea ecx, [esp + 0xc8]
// 0063c9ff  51                   push ecx
// 0063ca00  8bcf                 mov ecx, edi
// 0063ca02  e8f9b7faff           call 0x5e8200
// 0063ca07  f60580d5970001       test byte ptr [0x97d580], 1
// 0063ca0e  7511                 jne 0x63ca21
// 0063ca10  830d80d5970001       or dword ptr [0x97d580], 1
// 0063ca17  b968d59700           mov ecx, 0x97d568
// 0063ca1c  e84f77fdff           call 0x614170
// 0063ca21  8bcf                 mov ecx, edi
// 0063ca23  eb65                 jmp 0x63ca8a
// 0063ca25  8bcb                 mov ecx, ebx
// 0063ca27  e894b8faff           call 0x5e82c0
// 0063ca2c  50                   push eax
// 0063ca2d  8d94245c010000       lea edx, [esp + 0x15c]
// 0063ca34  52                   push edx
// 0063ca35  8bcf                 mov ecx, edi
// 0063ca37  e884b8faff           call 0x5e82c0
// 0063ca3c  8bc8                 mov ecx, eax
// 0063ca3e  e8ad1efdff           call 0x60e8f0
// 0063ca43  8d842458010000       lea eax, [esp + 0x158]
// 0063ca4a  50                   push eax
// 0063ca4b  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 0063ca52  51                   push ecx
// 0063ca53  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 0063ca5a  e8a19ce3ff           call 0x476700
// 0063ca5f  8d9424f8000000       lea edx, [esp + 0xf8]
// 0063ca66  52                   push edx
// 0063ca67  8bcb                 mov ecx, ebx
// 0063ca69  e892b7faff           call 0x5e8200
// 0063ca6e  f60580d5970001       test byte ptr [0x97d580], 1
// 0063ca75  7511                 jne 0x63ca88
// 0063ca77  830d80d5970001       or dword ptr [0x97d580], 1
// 0063ca7e  b968d59700           mov ecx, 0x97d568
// 0063ca83  e8e876fdff           call 0x614170
// 0063ca88  8bcb                 mov ecx, ebx
// 0063ca8a  6868d59700           push 0x97d568
// 0063ca8f  e8ccacfaff           call 0x5e7760
// 0063ca94  8d44241c             lea eax, [esp + 0x1c]
// 0063ca98  50                   push eax
// 0063ca99  8d8c248c010000       lea ecx, [esp + 0x18c]
// 0063caa0  51                   push ecx
// 0063caa1  8bce                 mov ecx, esi
// 0063caa3  e808c2f5ff           call 0x598cb0
// 0063caa8  8bc8                 mov ecx, eax
// 0063caaa  e8519ce3ff           call 0x476700
// 0063caaf  8d54244c             lea edx, [esp + 0x4c]
// 0063cab3  52                   push edx
// 0063cab4  8d8424bc010000       lea eax, [esp + 0x1bc]
// 0063cabb  50                   push eax
// 0063cabc  8bcf                 mov ecx, edi
// 0063cabe  e8fdb7faff           call 0x5e82c0
// 0063cac3  8bc8                 mov ecx, eax
// 0063cac5  e8369ce3ff           call 0x476700
// 0063caca  8d4c2410             lea ecx, [esp + 0x10]
// 0063cace  51                   push ecx
// 0063cacf  e84c5be7ff           call 0x4b2620
// 0063cad4  83c404               add esp, 4
// 0063cad7  8b10                 mov edx, dword ptr [eax]
// 0063cad9  83c004               add eax, 4
// 0063cadc  50                   push eax
// 0063cadd  8d8e1c040000         lea ecx, [esi + 0x41c]
// 0063cae3  c78424f401000000000000 mov dword ptr [esp + 0x1f4], 0
// 0063caee  899618040000         mov dword ptr [esi + 0x418], edx
// 0063caf4  e8b75adcff           call 0x4025b0
// 0063caf9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0063cafd  83cbff               or ebx, 0xffffffff
// 0063cb00  899c24f0010000       mov dword ptr [esp + 0x1f0], ebx
// 0063cb07  85c0                 test eax, eax
// 0063cb09  742a                 je 0x63cb35
// 0063cb0b  8bf8                 mov edi, eax
// 0063cb0d  83c004               add eax, 4
// 0063cb10  8bcb                 mov ecx, ebx
// 0063cb12  f00fc108             lock xadd dword ptr [eax], ecx
// 0063cb16  751d                 jne 0x63cb35
// 0063cb18  8b17                 mov edx, dword ptr [edi]
// 0063cb1a  8b4204               mov eax, dword ptr [edx + 4]
// 0063cb1d  8bcf                 mov ecx, edi
// 0063cb1f  ffd0                 call eax
// 0063cb21  8d4f08               lea ecx, [edi + 8]
// 0063cb24  8bd3                 mov edx, ebx
// 0063cb26  f00fc111             lock xadd dword ptr [ecx], edx
// 0063cb2a  7509                 jne 0x63cb35
// 0063cb2c  8b07                 mov eax, dword ptr [edi]
// 0063cb2e  8b5008               mov edx, dword ptr [eax + 8]
// 0063cb31  8bcf                 mov ecx, edi
// 0063cb33  ffd2                 call edx
// 0063cb35  68f49c8400           push 0x849cf4
// 0063cb3a  8d8c2480000000       lea ecx, [esp + 0x80]
// 0063cb41  ff1558248000         call dword ptr [0x802458]
// 0063cb47  8b8e18040000         mov ecx, dword ptr [esi + 0x418]
// 0063cb4d  8b01                 mov eax, dword ptr [ecx]
// 0063cb4f  8b4004               mov eax, dword ptr [eax + 4]
// 0063cb52  8d54247c             lea edx, [esp + 0x7c]
// 0063cb56  52                   push edx
// 0063cb57  c78424f401000001000000 mov dword ptr [esp + 0x1f4], 1
// 0063cb62  ffd0                 call eax
// 0063cb64  8d4c247c             lea ecx, [esp + 0x7c]
// 0063cb68  899c24f0010000       mov dword ptr [esp + 0x1f0], ebx
// 0063cb6f  ff1568248000         call dword ptr [0x802468]
// 0063cb75  8b8e18040000         mov ecx, dword ptr [esi + 0x418]
// 0063cb7b  56                   push esi
// 0063cb7c  e8cf78faff           call 0x5e4450
// 0063cb81  8bbe18040000         mov edi, dword ptr [esi + 0x418]
// 0063cb87  8bcd                 mov ecx, ebp
// 0063cb89  e882bff9ff           call 0x5d8b10
// 0063cb8e  50                   push eax
// 0063cb8f  8bcf                 mov ecx, edi
// 0063cb91  e8da78faff           call 0x5e4470
// 0063cb96  8d4c241c             lea ecx, [esp + 0x1c]
// 0063cb9a  51                   push ecx
// 0063cb9b  8b8e18040000         mov ecx, dword ptr [esi + 0x418]
// 0063cba1  e8ea78faff           call 0x5e4490
// 0063cba6  8b8e18040000         mov ecx, dword ptr [esi + 0x418]
// 0063cbac  8d54244c             lea edx, [esp + 0x4c]
// 0063cbb0  52                   push edx
// 0063cbb1  e80a79faff           call 0x5e44c0
// 0063cbb6  8b8e18040000         mov ecx, dword ptr [esi + 0x418]
// 0063cbbc  56                   push esi
// 0063cbbd  e82eddf1ff           call 0x55a8f0
// 0063cbc2  8b8c24e8010000       mov ecx, dword ptr [esp + 0x1e8]
// 0063cbc9  5f                   pop edi
// 0063cbca  5e                   pop esi
// 0063cbcb  5d                   pop ebp
// 0063cbcc  64890d00000000       mov dword ptr fs:[0], ecx
// 0063cbd3  5b                   pop ebx
// 0063cbd4  81c4e4010000         add esp, 0x1e4
// 0063cbda  c20400               ret 4

// from server: 84% by king_originala
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <intrin.h>
namespace boost {namespace detail {
struct sp_counted_base {
 virtual ~sp_counted_base(){}virtual void dispose()=0;virtual void destroy(){delete this;}
 long use_count_,weak_count_;
 void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
 void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {
 sp_counted_base*pi_;
 shared_count():pi_(0){}
 shared_count(const shared_count&r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}
 shared_count&operator=(const shared_count&);
 ~shared_count(){if(pi_)pi_->release();}
};
}
template<class T>struct shared_ptr {
 T*px;detail::shared_count pn;
 shared_ptr():px(0),pn(){}
 shared_ptr(const shared_ptr&r):px(r.px),pn(r.pn){}
 shared_ptr&operator=(const shared_ptr&r){px=r.px;pn=r.pn;return *this;}
 T*operator->()const{return px;}
};
}
struct __declspec(dllimport) ImportedString {char data[28];ImportedString(const char*);~ImportedString()throw();};
namespace G3D {
struct Vector3 {
 float x,y,z;
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&r):x(r.x),y(r.y),z(r.z){}
 Vector3&operator=(const Vector3&r){x=r.x;y=r.y;z=r.z;return *this;}
};
struct Matrix3 {float data[9];Matrix3(const Matrix3&r){*this=r;}Matrix3&operator=(const Matrix3&);};
struct CoordinateFrame {
 Matrix3 rotation;Vector3 translation;
 CoordinateFrame();
 CoordinateFrame(const CoordinateFrame&r):rotation(r.rotation),translation(r.translation){}
 ~CoordinateFrame(){}
 void lookAt(const Vector3&,Vector3);
 CoordinateFrame operator*(const CoordinateFrame&)const;
 CoordinateFrame inverse()const;
 CoordinateFrame toObjectSpace(const CoordinateFrame&)const;
};
}
namespace RBX {
struct Velocity {G3D::Vector3 linear,rotational;Velocity()throw();static __forceinline const Velocity&zero(){static Velocity value;return value;}};
struct Primitive;
struct Clump {char opaque[0x1c];Primitive*rootPrimitive;Primitive*getRootPrimitive(){return rootPrimitive;}};
struct Assembly {char opaque[0x24];Clump*rootClump;Primitive*getMainPrimitive()const{return rootClump->getRootPrimitive();}};
struct Primitive {
 Assembly*getAssembly()const;
 const G3D::CoordinateFrame&getCoordinateFrame()const;
 void setCoordinateFrame(const G3D::CoordinateFrame&);
 void setVelocity(const Velocity&);
};
struct Instance {virtual ~Instance();virtual void setName(const ImportedString&);void setParent(Instance*);};
struct PartInstance:Instance {const G3D::CoordinateFrame&getCoordinateFrame()const;};
struct AutoJoint:Instance {void setPart0(PartInstance*);void setPart1(PartInstance*);void setC0(const G3D::CoordinateFrame&);void setC1(const G3D::CoordinateFrame&);};
boost::shared_ptr<AutoJoint>__cdecl createSeatJoint();
struct Humanoid {Primitive*getTorsoPrimitive()const;PartInstance*getTorso()const;};
struct Seat:PartInstance {
 char unchanged[0x418-sizeof(PartInstance)];boost::shared_ptr<AutoJoint>weld;
 void seatCharacter(Humanoid*);
};
void Seat::seatCharacter(Humanoid*h){
 G3D::CoordinateFrame original=getCoordinateFrame();
 G3D::CoordinateFrame C0;
 C0.lookAt(G3D::Vector3(0,-1,0),G3D::Vector3(0,0,-1));
 C0.translation=G3D::Vector3(0,3,0);
 G3D::CoordinateFrame C1;
 C1.lookAt(G3D::Vector3(0,-1,0),G3D::Vector3(0,0,-1));
 C1.translation=G3D::Vector3(0,.6f,0);
 G3D::CoordinateFrame seatSpace=getCoordinateFrame()*C0;
 G3D::CoordinateFrame desired=seatSpace*C1.inverse();
 Primitive*torso=h->getTorsoPrimitive();
 Primitive*root=torso->getAssembly()->getMainPrimitive();
 if(root==torso){torso->setCoordinateFrame(desired);torso->setVelocity(Velocity::zero());}
 else{
  G3D::CoordinateFrame relative=torso->getCoordinateFrame().toObjectSpace(root->getCoordinateFrame());
  G3D::CoordinateFrame rootFrame=desired*relative;
  root->setCoordinateFrame(rootFrame);
  root->setVelocity(Velocity::zero());
 }
 G3D::CoordinateFrame seatJoint=getCoordinateFrame()*C0;
 G3D::CoordinateFrame torsoJoint=torso->getCoordinateFrame()*C1;
 weld=createSeatJoint();
 {ImportedString name("SeatWeld");weld->setName(name);}
 weld->setPart0(this);
 weld->setPart1(h->getTorso());
 weld->setC0(C0);weld->setC1(C1);weld->setParent(this);
}
}
