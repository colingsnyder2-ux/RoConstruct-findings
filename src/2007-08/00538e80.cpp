// from server: 100% by colin
// roc 2007-08 00538e80  unit: RBX::VScriptContext::?$FactoryProduct  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538e80
//
// 00538e80  83ec08               sub esp, 8
// 00538e83  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00538e87  56                   push esi
// 00538e88  8bf1                 mov esi, ecx
// 00538e8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00538e8e  8d542404             lea edx, [esp + 4]
// 00538e92  52                   push edx
// 00538e93  89442408             mov dword ptr [esp + 8], eax
// 00538e97  894c240c             mov dword ptr [esp + 0xc], ecx
// 00538e9b  e830ebf4ff           call 0x4879d0
// 00538ea0  83c404               add esp, 4
// 00538ea3  84c0                 test al, al
// 00538ea5  752b                 jne 0x538ed2
// 00538ea7  6a08                 push 8
// 00538ea9  c74608a07d5300       mov dword ptr [esi + 8], 0x537da0
// 00538eb0  c706c07d5300         mov dword ptr [esi], 0x537dc0
// 00538eb6  e83b700f00           call 0x62fef6
// 00538ebb  83c404               add esp, 4
// 00538ebe  85c0                 test eax, eax
// 00538ec0  740d                 je 0x538ecf
// 00538ec2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00538ec6  8908                 mov dword ptr [eax], ecx
// 00538ec8  8b542408             mov edx, dword ptr [esp + 8]
// 00538ecc  895004               mov dword ptr [eax + 4], edx
// 00538ecf  894604               mov dword ptr [esi + 4], eax
// 00538ed2  5e                   pop esi
// 00538ed3  83c408               add esp, 8
// 00538ed6  c20800               ret 8

struct S {
    void f(int a, int b);
};

extern "C" char __cdecl sub_004879d0(int* p);
extern "C" void* __cdecl sub_0062fef6(unsigned int size);

void S::f(int a, int b)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    if (!sub_004879d0(local)) {
        *(int*)((char*)this + 8) = 0x537da0;
        *(int*)this = 0x537dc0;
        void* p = sub_0062fef6(8);
        if (p) {
            *(int*)p = local[0];
            *(int*)((char*)p + 4) = local[1];
        }
        *(int*)((char*)this + 4) = (int)p;
    }
}
