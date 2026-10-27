// from server: 78% by coldek
// roc 2008-06 005cb530  unit: RBX::PlayerController  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb530
//
// 005cb530  83ec68               sub esp, 0x68
// 005cb533  53                   push ebx
// 005cb534  55                   push ebp
// 005cb535  56                   push esi
// 005cb536  8bf1                 mov esi, ecx
// 005cb538  57                   push edi
// 005cb539  8d4ef4               lea ecx, [esi - 0xc]
// 005cb53c  e85ff6ffff           call 0x5caba0
// 005cb541  89442414             mov dword ptr [esp + 0x14], eax
// 005cb545  8d442418             lea eax, [esp + 0x18]
// 005cb549  50                   push eax
// 005cb54a  8d4e0c               lea ecx, [esi + 0xc]
// 005cb54d  33db                 xor ebx, ebx
// 005cb54f  e8acf5ffff           call 0x5cab00
// 005cb554  8b28                 mov ebp, dword ptr [eax]
// 005cb556  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb55a  3bc3                 cmp eax, ebx
// 005cb55c  742c                 je 0x5cb58a
// 005cb55e  8bf8                 mov edi, eax
// 005cb560  83c004               add eax, 4
// 005cb563  83c9ff               or ecx, 0xffffffff
// 005cb566  f00fc108             lock xadd dword ptr [eax], ecx
// 005cb56a  751e                 jne 0x5cb58a
// 005cb56c  8b17                 mov edx, dword ptr [edi]
// 005cb56e  8b4204               mov eax, dword ptr [edx + 4]
// 005cb571  8bcf                 mov ecx, edi
// 005cb573  ffd0                 call eax
// 005cb575  8d4f08               lea ecx, [edi + 8]
// 005cb578  83caff               or edx, 0xffffffff
// 005cb57b  f00fc111             lock xadd dword ptr [ecx], edx
// 005cb57f  7509                 jne 0x5cb58a
// 005cb581  8b07                 mov eax, dword ptr [edi]
// 005cb583  8b5008               mov edx, dword ptr [eax + 8]
// 005cb586  8bcf                 mov ecx, edi
// 005cb588  ffd2                 call edx
// 005cb58a  55                   push ebp
// 005cb58b  e810f7ecff           call 0x49aca0
// 005cb590  8bf8                 mov edi, eax
// 005cb592  83c404               add esp, 4
// 005cb595  3bef                 cmp ebp, edi
// 005cb597  750d                 jne 0x5cb5a6
// 005cb599  57                   push edi
// 005cb59a  e881e40000           call 0x5d9a20
// 005cb59f  83c404               add esp, 4
// 005cb5a2  8be8                 mov ebp, eax
// 005cb5a4  eb02                 jmp 0x5cb5a8
// 005cb5a6  8beb                 mov ebp, ebx
// 005cb5a8  57                   push edi
// 005cb5a9  e8a268ecff           call 0x491e50
// 005cb5ae  83c404               add esp, 4
// 005cb5b1  395c2414             cmp dword ptr [esp + 0x14], ebx
// 005cb5b5  0f8457020000         je 0x5cb812
// 005cb5bb  3beb                 cmp ebp, ebx
// 005cb5bd  0f844f020000         je 0x5cb812
// 005cb5c3  3bc3                 cmp eax, ebx
// 005cb5c5  0f8447020000         je 0x5cb812
// 005cb5cb  8d8888020000         lea ecx, [eax + 0x288]
// 005cb5d1  8b01                 mov eax, dword ptr [ecx]
// 005cb5d3  8b5004               mov edx, dword ptr [eax + 4]
// 005cb5d6  ffd2                 call edx
// 005cb5d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cb5dc  8bf8                 mov edi, eax
// 005cb5de  8d442424             lea eax, [esp + 0x24]
// 005cb5e2  50                   push eax
// 005cb5e3  885c2428             mov byte ptr [esp + 0x28], bl
// 005cb5e7  885c2429             mov byte ptr [esp + 0x29], bl
// 005cb5eb  885c242a             mov byte ptr [esp + 0x2a], bl
// 005cb5ef  885c242b             mov byte ptr [esp + 0x2b], bl
// 005cb5f3  885c242c             mov byte ptr [esp + 0x2c], bl
// 005cb5f7  885c242d             mov byte ptr [esp + 0x2d], bl
// 005cb5fb  885c242e             mov byte ptr [esp + 0x2e], bl
// 005cb5ff  885c242f             mov byte ptr [esp + 0x2f], bl
// 005cb603  885c2430             mov byte ptr [esp + 0x30], bl
// 005cb607  e854330000           call 0x5ce960
// 005cb60c  385c2424             cmp byte ptr [esp + 0x24], bl
// 005cb610  0f8517010000         jne 0x5cb72d
// 005cb616  385c2425             cmp byte ptr [esp + 0x25], bl
// 005cb61a  0f850d010000         jne 0x5cb72d
// 005cb620  385c2426             cmp byte ptr [esp + 0x26], bl
// 005cb624  0f8514010000         jne 0x5cb73e
// 005cb62a  385c2427             cmp byte ptr [esp + 0x27], bl
// 005cb62e  0f850a010000         jne 0x5cb73e
// 005cb634  8d4c2424             lea ecx, [esp + 0x24]
// 005cb638  e8234bfdff           call 0x5a0160
// 005cb63d  84c0                 test al, al
// 005cb63f  0f84a0010000         je 0x5cb7e5
// 005cb645  8d4c2424             lea ecx, [esp + 0x24]
// 005cb649  e8b2edffff           call 0x5ca400
// 005cb64e  d95c2410             fstp dword ptr [esp + 0x10]
// 005cb652  8d4c2424             lea ecx, [esp + 0x24]
// 005cb656  e865edffff           call 0x5ca3c0
// 005cb65b  d95c2418             fstp dword ptr [esp + 0x18]
// 005cb65f  8d4c2430             lea ecx, [esp + 0x30]
// 005cb663  51                   push ecx
// 005cb664  8d54244c             lea edx, [esp + 0x4c]
// 005cb668  52                   push edx
// 005cb669  8bcf                 mov ecx, edi
// 005cb66b  e890f8e8ff           call 0x45af00
// 005cb670  8bc8                 mov ecx, eax
// 005cb672  e879d1f4ff           call 0x5187f0
// 005cb677  d9ee                 fldz 
// 005cb679  d95c2434             fstp dword ptr [esp + 0x34]
// 005cb67d  51                   push ecx
// 005cb67e  d905706e8200         fld dword ptr [0x826e70]
// 005cb684  8d4c2434             lea ecx, [esp + 0x34]
// 005cb688  d91c24               fstp dword ptr [esp]
// 005cb68b  e8e0cdf4ff           call 0x518470
// 005cb690  ddd8                 fstp st(0)
// 005cb692  d9442430             fld dword ptr [esp + 0x30]
// 005cb696  d9c0                 fld st(0)
// 005cb698  d9442410             fld dword ptr [esp + 0x10]
// 005cb69c  dcc9                 fmul st(1), st(0)
// 005cb69e  d9c0                 fld st(0)
// 005cb6a0  d9ee                 fldz 
// 005cb6a2  dcc9                 fmul st(1), st(0)
// 005cb6a4  d9442438             fld dword ptr [esp + 0x38]
// 005cb6a8  d9c0                 fld st(0)
// 005cb6aa  decc                 fmulp st(4)
// 005cb6ac  d9cd                 fxch st(5)
// 005cb6ae  d9e0                 fchs 
// 005cb6b0  d9442418             fld dword ptr [esp + 0x18]
// 005cb6b4  dcce                 fmul st(6), st(0)
// 005cb6b6  d9c0                 fld st(0)
// 005cb6b8  decb                 fmulp st(3)
// 005cb6ba  dec9                 fmulp st(1)
// 005cb6bc  d9cd                 fxch st(5)
// 005cb6be  dec4                 faddp st(4)
// 005cb6c0  d9cb                 fxch st(3)
// 005cb6c2  d954243c             fst dword ptr [esp + 0x3c]
// 005cb6c6  d9cb                 fxch st(3)
// 005cb6c8  dec1                 faddp st(1)
// 005cb6ca  d9542440             fst dword ptr [esp + 0x40]
// 005cb6ce  d9cb                 fxch st(3)
// 005cb6d0  dec1                 faddp st(1)
// 005cb6d2  d9542444             fst dword ptr [esp + 0x44]
// 005cb6d6  dcc8                 fmul st(0), st(0)
// 005cb6d8  d9c2                 fld st(2)
// 005cb6da  decb                 fmulp st(3)
// 005cb6dc  dec2                 faddp st(2)
// 005cb6de  dcc8                 fmul st(0), st(0)
// 005cb6e0  dec1                 faddp st(1)
// 005cb6e2  d81d94748200         fcomp dword ptr [0x827494]
// 005cb6e8  dfe0                 fnstsw ax
// 005cb6ea  f6c441               test ah, 0x41
// 005cb6ed  7515                 jne 0x5cb704
// 005cb6ef  d905706e8200         fld dword ptr [0x826e70]
// 005cb6f5  51                   push ecx
// 005cb6f6  8d4c2440             lea ecx, [esp + 0x40]
// 005cb6fa  d91c24               fstp dword ptr [esp]
// 005cb6fd  e86ecdf4ff           call 0x518470
// 005cb702  ddd8                 fstp st(0)
// 005cb704  8d44243c             lea eax, [esp + 0x3c]
// 005cb708  50                   push eax
// 005cb709  8bcd                 mov ecx, ebp
// 005cb70b  e870080100           call 0x5dbf80
// 005cb710  8bcf                 mov ecx, edi
// 005cb712  e8e9130000           call 0x5ccb00
// 005cb717  8bcd                 mov ecx, ebp
// 005cb719  84c0                 test al, al
// 005cb71b  0f84bc000000         je 0x5cb7dd
// 005cb721  6a01                 push 1
// 005cb723  e8080b0100           call 0x5dc230
// 005cb728  e9c5000000           jmp 0x5cb7f2
// 005cb72d  385c2426             cmp byte ptr [esp + 0x26], bl
// 005cb731  750b                 jne 0x5cb73e
// 005cb733  385c2427             cmp byte ptr [esp + 0x27], bl
// 005cb737  7505                 jne 0x5cb73e
// 005cb739  895e1c               mov dword ptr [esi + 0x1c], ebx
// 005cb73c  eb24                 jmp 0x5cb762
// 005cb73e  8d4c2424             lea ecx, [esp + 0x24]
// 005cb742  e899ecffff           call 0x5ca3e0
// 005cb747  d88c2484000000       fmul dword ptr [esp + 0x84]
// 005cb74e  51                   push ecx
// 005cb74f  8bcf                 mov ecx, edi
// 005cb751  d80dc0788300         fmul dword ptr [0x8378c0]
// 005cb757  d91c24               fstp dword ptr [esp]
// 005cb75a  e8b1100000           call 0x5cc810
// 005cb75f  ff461c               inc dword ptr [esi + 0x1c]
// 005cb762  385c2424             cmp byte ptr [esp + 0x24], bl
// 005cb766  7404                 je 0x5cb76c
// 005cb768  d9e8                 fld1 
// 005cb76a  eb10                 jmp 0x5cb77c
// 005cb76c  385c2425             cmp byte ptr [esp + 0x25], bl
// 005cb770  7408                 je 0x5cb77a
// 005cb772  d905b8c38100         fld dword ptr [0x81c3b8]
// 005cb778  eb02                 jmp 0x5cb77c
// 005cb77a  d9ee                 fldz 
// 005cb77c  8d4c2418             lea ecx, [esp + 0x18]
// 005cb780  d95c2410             fstp dword ptr [esp + 0x10]
// 005cb784  51                   push ecx
// 005cb785  8d54244c             lea edx, [esp + 0x4c]
// 005cb789  52                   push edx
// 005cb78a  8bcf                 mov ecx, edi
// 005cb78c  e86ff7e8ff           call 0x45af00
// 005cb791  8bc8                 mov ecx, eax
// 005cb793  e858d0f4ff           call 0x5187f0
// 005cb798  d9ee                 fldz 
// 005cb79a  d95c241c             fstp dword ptr [esp + 0x1c]
// 005cb79e  51                   push ecx
// 005cb79f  d905706e8200         fld dword ptr [0x826e70]
// 005cb7a5  8d4c241c             lea ecx, [esp + 0x1c]
// 005cb7a9  d91c24               fstp dword ptr [esp]
// 005cb7ac  e8bfccf4ff           call 0x518470
// 005cb7b1  ddd8                 fstp st(0)
// 005cb7b3  d9442418             fld dword ptr [esp + 0x18]
// 005cb7b7  8d44243c             lea eax, [esp + 0x3c]
// 005cb7bb  d9442410             fld dword ptr [esp + 0x10]
// 005cb7bf  dcc9                 fmul st(1), st(0)
// 005cb7c1  d9c9                 fxch st(1)
// 005cb7c3  d95c243c             fstp dword ptr [esp + 0x3c]
// 005cb7c7  d905c4358100         fld dword ptr [0x8135c4]
// 005cb7cd  d8c9                 fmul st(1)
// 005cb7cf  d95c2440             fstp dword ptr [esp + 0x40]
// 005cb7d3  d84c2420             fmul dword ptr [esp + 0x20]
// 005cb7d7  d95c2444             fstp dword ptr [esp + 0x44]
// 005cb7db  eb0d                 jmp 0x5cb7ea
// 005cb7dd  53                   push ebx
// 005cb7de  e84d0a0100           call 0x5dc230
// 005cb7e3  eb0d                 jmp 0x5cb7f2
// 005cb7e5  e8b6caeaff           call 0x4782a0
// 005cb7ea  50                   push eax
// 005cb7eb  8bcd                 mov ecx, ebp
// 005cb7ed  e88e070100           call 0x5dbf80
// 005cb7f2  385c242c             cmp byte ptr [esp + 0x2c], bl
// 005cb7f6  7411                 je 0x5cb809
// 005cb7f8  53                   push ebx
// 005cb7f9  8bcd                 mov ecx, ebp
// 005cb7fb  e8b00a0100           call 0x5dc2b0
// 005cb800  6a01                 push 1
// 005cb802  8bcd                 mov ecx, ebp
// 005cb804  e8670a0100           call 0x5dc270
// 005cb809  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005cb80d  e87eebffff           call 0x5ca390
// 005cb812  5f                   pop edi
// 005cb813  5e                   pop esi
// 005cb814  5d                   pop ebp
// 005cb815  5b                   pop ebx
// 005cb816  83c468               add esp, 0x68
// 005cb819  c20c00               ret 0xc

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
#include <intrin.h>
namespace boost {namespace detail {
struct sp_counted_base {
 virtual ~sp_counted_base(){}virtual void dispose()=0;virtual void destroy(){delete this;}
 long use_count_,weak_count_;
 void weak_release(){if(_InterlockedDecrement(&weak_count_)==0)destroy();}
 void release(){if(_InterlockedDecrement(&use_count_)==0){dispose();weak_release();}}
};
struct shared_count {sp_counted_base*pi_;shared_count(const shared_count&r):pi_(r.pi_){if(pi_)_InterlockedIncrement(&pi_->use_count_);}~shared_count(){if(pi_)pi_->release();}};
}
template<class T>struct shared_ptr {T*px;detail::shared_count pn;T*get()const{return px;}};
template<class T>struct weak_ptr {T*px;void*control;shared_ptr<T>lock()const;};
}
namespace G3D {
struct Vector3 {
 float x,y,z;
 Vector3(float a,float b,float c):x(a),y(b),z(c){}
 Vector3(const Vector3&r):x(r.x),y(r.y),z(r.z){}
 Vector3 operator*(float s)const{return Vector3(x*s,y*s,z*s);}
 Vector3 operator+(const Vector3&r)const{return Vector3(x+r.x,y+r.y,z+r.z);}
 float squaredLength()const{return x*x+y*y+z*z;}
 __declspec(noalias) float unitize(float);
 static __declspec(noalias) const Vector3& zero();
};
struct CoordinateFrame {char opaque[48];CoordinateFrame(const CoordinateFrame&);~CoordinateFrame(){}Vector3 lookVector()const;};
struct ReferenceCountedObject {virtual ~ReferenceCountedObject();long count;void*weakPointers;};
}
namespace RBX {
struct Instance {virtual ~Instance();};
struct PVInstance:Instance {};
struct ModelInstance:PVInstance {};
struct Humanoid {
 static __declspec(noalias) Humanoid* fromInstance(Instance*);
 __declspec(noalias) void setWalkDirection(const G3D::Vector3&);
 __declspec(noalias) void setMovementFlag(bool);
 void setSit(bool);void setJump(bool);
};
namespace Network {struct Players {static ModelInstance*findLocalCharacter(const Instance*);};}
struct Camera {
 __declspec(noalias) G3D::CoordinateFrame getCameraCoordinateFrame() const;
 __declspec(noalias) void panRadians(float);
 __declspec(noalias) bool getMovementFlag() const;
};
struct ICameraOwner {virtual ~ICameraOwner();virtual Camera*getCamera()const=0;};
struct WorkspacePrimary {virtual ~WorkspacePrimary();char reserved[0x288-4];};
struct Workspace:WorkspacePrimary,ICameraOwner {static Workspace*findWorkspace(const Instance*);};
struct NavKeys {
 bool forward_arrow,backward_arrow,left_arrow,right_arrow,forward_asdw,backward_asdw,left_asdw,right_asdw,space;
 NavKeys():forward_arrow(false),backward_arrow(false),left_arrow(false),right_arrow(false),forward_asdw(false),backward_asdw(false),left_asdw(false),right_asdw(false),space(false){}
 __declspec(noalias) bool hasASDW() const;
 float forwardBackwardASDW()const;float leftRightASDW()const;float leftRightArrow()const;
};
struct UserInputBase {void getNavKeys(NavKeys&)const;bool ctrlKeyDown()const;};
struct Controller:G3D::ReferenceCountedObject {};
struct RunService;struct ControllerService;
struct Heartbeat {const float time,step;};
template<class C,class E>struct Listener {virtual void onEvent(const C*,E)=0;virtual ~Listener(){}};
struct SteppingController:Controller,Listener<RunService,Heartbeat> {boost::shared_ptr<RunService>runService;boost::weak_ptr<const PVInstance>controlledInstance;};
struct PlayerController:SteppingController {
 boost::weak_ptr<ControllerService>controllerService;int stepsRotating;
 __declspec(noalias) const UserInputBase* getHardwareDevice() const;
 virtual __declspec(noalias) void onEvent(const RunService*,Heartbeat);
};
void PlayerController::onEvent(const RunService*,Heartbeat event){
 const UserInputBase*hardware=getHardwareDevice();
 const PVInstance*controlled=controlledInstance.lock().get();
 ModelInstance*character=Network::Players::findLocalCharacter(controlled);
 Humanoid*humanoid=controlled==character?Humanoid::fromInstance(character):0;
 Workspace*workspace=Workspace::findWorkspace(character);
 if(hardware && humanoid && workspace){
  Camera*camera=workspace->getCamera();
  NavKeys keys;hardware->getNavKeys(keys);
  if(keys.forward_arrow || keys.backward_arrow || keys.left_arrow || keys.right_arrow){
   if(keys.left_arrow || keys.right_arrow){camera->panRadians(keys.leftRightArrow()*event.step*1.8f);++stepsRotating;}
   else stepsRotating=0;
   float amount=keys.forward_arrow?1.f:(keys.backward_arrow?-1.f:0.f);
   G3D::Vector3 forward=camera->getCameraCoordinateFrame().lookVector();
   forward.y=0.f;forward.unitize(.000001f);
   G3D::Vector3 walk=G3D::Vector3(forward.x,0.f,forward.z)*amount;
   humanoid->setWalkDirection(walk);
  }else if(keys.hasASDW()){
   float forwardAmount=keys.forwardBackwardASDW();
   float leftAmount=keys.leftRightASDW();
   G3D::Vector3 forward=camera->getCameraCoordinateFrame().lookVector();
   forward.y=0.f;forward.unitize(.000001f);
   G3D::Vector3 walk(forward.x*forwardAmount+forward.z*leftAmount,0.f*forwardAmount+0.f*leftAmount,forward.z*forwardAmount+(-forward.x)*leftAmount);
   if(walk.squaredLength()>1.f)walk.unitize(.000001f);
   humanoid->setWalkDirection(walk);
   if(camera->getMovementFlag())humanoid->setMovementFlag(true);
   else humanoid->setMovementFlag(false);
  }else humanoid->setWalkDirection(G3D::Vector3::zero());
  if(keys.space){humanoid->setSit(false);humanoid->setJump(true);}
  hardware->ctrlKeyDown();
 }
}
}

