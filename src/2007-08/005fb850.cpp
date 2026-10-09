// from server: 50% by colin
// roc 2007-08 005fb850  unit: RBX::InletTool  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb850
//
// 005fb850  8b442408             mov eax, dword ptr [esp + 8]
// 005fb854  8a08                 mov cl, byte ptr [eax]
// 005fb856  56                   push esi
// 005fb857  8b742408             mov esi, dword ptr [esp + 8]
// 005fb85b  6a00                 push 0
// 005fb85d  68284a8800           push 0x884a28
// 005fb862  684c1f8800           push 0x881f4c
// 005fb867  6a00                 push 0
// 005fb869  56                   push esi
// 005fb86a  884c2420             mov byte ptr [esp + 0x20], cl
// 005fb86e  e8c3540300           call 0x630d36
// 005fb873  83c414               add esp, 0x14
// 005fb876  85c0                 test eax, eax
// 005fb878  740e                 je 0x5fb888
// 005fb87a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005fb87e  52                   push edx
// 005fb87f  8bc8                 mov ecx, eax
// 005fb881  e83acaf7ff           call 0x5782c0
// 005fb886  5e                   pop esi
// 005fb887  c3                   ret 
// 005fb888  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fb88c  50                   push eax
// 005fb88d  8bce                 mov ecx, esi
// 005fb88f  e81c010000           call 0x5fb9b0
// 005fb894  5e                   pop esi
// 005fb895  c3                   ret 

struct S_func_005fb850 {
    char pad0[8];
    int m_x;
    int f(int a, int b);
};

extern "C" int __stdcall sub_00630d36(int, int, int, int, int);
extern "C" int __stdcall sub_005782c0(int, int);
extern "C" int __stdcall sub_005fb9b0(int, int);

int S_func_005fb850::f(int a, int b)
{
    char c = *(char*)a;
    int r = sub_00630d36(b, 0, 0x884a28, 0x881f4c, 0);
    if (r != 0) {
        return sub_005782c0(r, b);
    }
    return sub_005fb9b0(b, b);
}
