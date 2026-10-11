// from server: 64% by colin
// roc 2008-06 005819a0  unit: RBX::CameraVerb  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005819a0
//
// 005819a0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005819a3  6a0b                 push 0xb
// 005819a5  50                   push eax
// 005819a6  e805eeffff           call 0x5807b0
// 005819ab  83c404               add esp, 4
// 005819ae  8bc8                 mov ecx, eax
// 005819b0  e86bbe0300           call 0x5bd820
// 005819b5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005819b9  8b11                 mov edx, dword ptr [ecx]
// 005819bb  8b02                 mov eax, dword ptr [edx]
// 005819bd  c744240401000000     mov dword ptr [esp + 4], 1
// 005819c5  ffe0                 jmp eax

extern "C" int __cdecl sub_5807b0(int, int);
extern "C" int __cdecl sub_5bd820(int);

struct CameraVerb
{
    char pad[0xc];
    int field_0C;
    void f(int);
};

void CameraVerb::f(int arg)
{
    int value = sub_5807b0(field_0C, 11);
    sub_5bd820(value);
    int* p = (int*)arg;
    int* vt = (int*)*p;
    int (*fn)(int) = (int (*)(int))vt[0];
    fn(1);
}
