// from server: 83% by colin
// roc 2007-08 00530660  unit: RBX::ModelInstance  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530660
//
// 00530660  56                   push esi
// 00530661  8bf1                 mov esi, ecx
// 00530663  e87839fcff           call 0x4f3fe0
// 00530668  d900                 fld dword ptr [eax]
// 0053066a  d91e                 fstp dword ptr [esi]
// 0053066c  d94004               fld dword ptr [eax + 4]
// 0053066f  d95e04               fstp dword ptr [esi + 4]
// 00530672  d94008               fld dword ptr [eax + 8]
// 00530675  d95e08               fstp dword ptr [esi + 8]
// 00530678  e86339fcff           call 0x4f3fe0
// 0053067d  d94004               fld dword ptr [eax + 4]
// 00530680  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00530684  8b542410             mov edx, dword ptr [esp + 0x10]
// 00530688  d9e0                 fchs 
// 0053068a  d94008               fld dword ptr [eax + 8]
// 0053068d  d9e0                 fchs 
// 0053068f  d900                 fld dword ptr [eax]
// 00530691  8b442408             mov eax, dword ptr [esp + 8]
// 00530695  d9e0                 fchs 
// 00530697  d95e0c               fstp dword ptr [esi + 0xc]
// 0053069a  d9c9                 fxch st(1)
// 0053069c  d95e10               fstp dword ptr [esi + 0x10]
// 0053069f  d95e14               fstp dword ptr [esi + 0x14]
// 005306a2  89461c               mov dword ptr [esi + 0x1c], eax
// 005306a5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005306a9  894e20               mov dword ptr [esi + 0x20], ecx
// 005306ac  895624               mov dword ptr [esi + 0x24], edx
// 005306af  894628               mov dword ptr [esi + 0x28], eax
// 005306b2  c6461801             mov byte ptr [esi + 0x18], 1
// 005306b6  8bc6                 mov eax, esi
// 005306b8  5e                   pop esi
// 005306b9  c21000               ret 0x10

struct ModelInstance {
    float m0;
    float m4;
    float m8;
    float mC;
    float m10;
    float m14;
    unsigned char m18;
    char pad19[3];
    int m1C;
    int m20;
    int m24;
    int m28;
    ModelInstance* init(int a, int b, int c, int d);
};

extern "C" float* __cdecl sub_4F3FE0();

ModelInstance* ModelInstance::init(int a, int b, int c, int d) {
    float* p = sub_4F3FE0();
    m0 = p[0];
    m4 = p[1];
    m8 = p[2];
    p = sub_4F3FE0();
    mC = -p[1];
    m10 = -p[2];
    m14 = -p[0];
    m1C = a;
    m20 = b;
    m24 = c;
    m28 = d;
    m18 = 1;
    return this;
}
