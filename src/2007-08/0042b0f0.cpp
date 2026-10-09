// from server: 42% by colin
// roc 2007-08 0042b0f0  unit: VCLuaFunction::?$CComObject  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b0f0
//
// 0042b0f0  6aff                 push -1
// 0042b0f2  6848fb7300           push 0x73fb48
// 0042b0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0042b0fd  50                   push eax
// 0042b0fe  83ec28               sub esp, 0x28
// 0042b101  a188518b00           mov eax, dword ptr [0x8b5188]
// 0042b106  33c4                 xor eax, esp
// 0042b108  50                   push eax
// 0042b109  8d44242c             lea eax, [esp + 0x2c]
// 0042b10d  64a300000000         mov dword ptr fs:[0], eax
// 0042b113  833900               cmp dword ptr [ecx], 0
// 0042b116  7517                 jne 0x42b12f
// 0042b118  8d4c2404             lea ecx, [esp + 4]
// 0042b11c  e8df8afeff           call 0x413c00
// 0042b121  50                   push eax
// 0042b122  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0042b12a  e84190feff           call 0x414170
// 0042b12f  8b4104               mov eax, dword ptr [ecx + 4]
// 0042b132  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042b135  50                   push eax
// 0042b136  ffd1                 call ecx
// 0042b138  83c404               add esp, 4
// 0042b13b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042b13f  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b146  59                   pop ecx
// 0042b147  83c434               add esp, 0x34
// 0042b14a  c3                   ret 

struct VCLuaFunction {
    void* field0;
    void* field4;
    void* field8;
    void invoke();
};

extern "C" void* __cdecl sub_413C00();
extern "C" void __cdecl sub_414170(void*);

void VCLuaFunction::invoke()
{
    if (field0 == 0) {
        void* p = sub_413C00();
        sub_414170(p);
    }
    void* a = field4;
    void* b = field8;
    ((void (__cdecl*)(void*))b)(a);
}
