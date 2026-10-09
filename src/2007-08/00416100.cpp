// from server: 88% by colin
// roc 2007-08 00416100  unit: VCLuaFunction::?$CComAggObject  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416100
//
// 00416100  56                   push esi
// 00416101  6860988c00           push 0x8c9860
// 00416106  e845e8ffff           call 0x414950
// 0041610b  8bf0                 mov esi, eax
// 0041610d  85f6                 test esi, esi
// 0041610f  7504                 jne 0x416115
// 00416111  5e                   pop esi
// 00416112  c21000               ret 0x10
// 00416115  8b06                 mov eax, dword ptr [esi]
// 00416117  8b5008               mov edx, dword ptr [eax + 8]
// 0041611a  57                   push edi
// 0041611b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041611f  56                   push esi
// 00416120  8bce                 mov ecx, esi
// 00416122  897e04               mov dword ptr [esi + 4], edi
// 00416125  ffd2                 call edx
// 00416127  50                   push eax
// 00416128  8d4e08               lea ecx, [esi + 8]
// 0041612b  e870dbffff           call 0x413ca0
// 00416130  8b7614               mov esi, dword ptr [esi + 0x14]
// 00416133  56                   push esi
// 00416134  6afc                 push -4
// 00416136  57                   push edi
// 00416137  ff1518ec7700         call dword ptr [0x77ec18]
// 0041613d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00416141  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00416145  8b542410             mov edx, dword ptr [esp + 0x10]
// 00416149  50                   push eax
// 0041614a  51                   push ecx
// 0041614b  52                   push edx
// 0041614c  57                   push edi
// 0041614d  ffd6                 call esi
// 0041614f  5f                   pop edi
// 00416150  5e                   pop esi
// 00416151  c21000               ret 0x10

struct VCLuaFunction {
    void* vtable;
    int field4;
    char pad8[12];
    int field14;
    void* method(int, int, int, int);
};

extern "C" void* __stdcall sub_414950(void*);
extern "C" void sub_413ca0(void*, void*);
extern "C" void* __stdcall SetWindowLongA(void*, int, int);

void* VCLuaFunction::method(int a1, int a2, int a3, int a4)
{
    VCLuaFunction* p = (VCLuaFunction*)sub_414950((void*)0x8c9860);
    if (p == 0)
        return 0;
    void** vt = (void**)p->vtable;
    void* (__thiscall *fn)(VCLuaFunction*) = (void* (__thiscall *)(VCLuaFunction*))vt[2];
    p->field4 = a1;
    void* r = fn(p);
    sub_413ca0(&p->pad8[0], r);
    void* f = (void*)p->field14;
    SetWindowLongA((void*)a1, -4, (int)f);
    void* (__stdcall *fn2)(int, int, int, int) = (void* (__stdcall *)(int, int, int, int))f;
    return fn2(a1, a2, a3, a4);
}
