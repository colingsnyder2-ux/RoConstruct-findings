// from server: 71% by colin
// roc 2007-08 00625ef0  unit: RBX::Running  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625ef0
//
// 00625ef0  8bc1                 mov eax, ecx
// 00625ef2  85c0                 test eax, eax
// 00625ef4  7405                 je 0x625efb
// 00625ef6  8d5008               lea edx, [eax + 8]
// 00625ef9  eb02                 jmp 0x625efd
// 00625efb  33d2                 xor edx, edx
// 00625efd  8b4804               mov ecx, dword ptr [eax + 4]
// 00625f00  8b8998010000         mov ecx, dword ptr [ecx + 0x198]
// 00625f06  8b4930               mov ecx, dword ptr [ecx + 0x30]
// 00625f09  56                   push esi
// 00625f0a  8d74240c             lea esi, [esp + 0xc]
// 00625f0e  56                   push esi
// 00625f0f  8d74240c             lea esi, [esp + 0xc]
// 00625f13  56                   push esi
// 00625f14  83c01c               add eax, 0x1c
// 00625f17  50                   push eax
// 00625f18  52                   push edx
// 00625f19  8b542418             mov edx, dword ptr [esp + 0x18]
// 00625f1d  6a00                 push 0
// 00625f1f  52                   push edx
// 00625f20  e80b9efdff           call 0x5ffd30
// 00625f25  85c0                 test eax, eax
// 00625f27  5e                   pop esi
// 00625f28  740c                 je 0x625f36
// 00625f2a  50                   push eax
// 00625f2b  e810def4ff           call 0x573d40
// 00625f30  83c404               add esp, 4
// 00625f33  c20800               ret 8
// 00625f36  33c0                 xor eax, eax
// 00625f38  c20800               ret 8

struct S_func_00625ef0 {
    int f(int a1, int a2);
};

extern "C" int __stdcall sub_005ffd30(int, int, int, int, int, int, int);
extern "C" int __stdcall sub_00573d40(int);

int S_func_00625ef0::f(int a1, int a2)
{
    int* p = this ? (int*)((char*)this + 8) : 0;
    int* q = (int*)(*(int*)((char*)this + 4));
    q = (int*)(*(int*)((char*)q + 0x198));
    q = (int*)(*(int*)((char*)q + 0x30));
    int v1;
    int v2;
    int r = sub_005ffd30((int)q, a1, 0, (int)p, (int)this + 0x1c, (int)&v1, (int)&v2);
    if (r != 0) {
        sub_00573d40(r);
        return r;
    }
    return 0;
}
