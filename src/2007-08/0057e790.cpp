// from server: 36% by colin
// roc 2007-08 0057e790  unit: RBX::Stats::N::?$TypedStatsItem  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057e790
//
// 0057e790  64a100000000         mov eax, dword ptr fs:[0]
// 0057e796  6aff                 push -1
// 0057e798  68c80a7500           push 0x750ac8
// 0057e79d  50                   push eax
// 0057e79e  64892500000000       mov dword ptr fs:[0], esp
// 0057e7a5  83ec28               sub esp, 0x28
// 0057e7a8  833900               cmp dword ptr [ecx], 0
// 0057e7ab  7516                 jne 0x57e7c3
// 0057e7ad  8d0c24               lea ecx, [esp]
// 0057e7b0  e84b54e9ff           call 0x413c00
// 0057e7b5  50                   push eax
// 0057e7b6  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0057e7be  e8ad59e9ff           call 0x414170
// 0057e7c3  8b4104               mov eax, dword ptr [ecx + 4]
// 0057e7c6  8b4908               mov ecx, dword ptr [ecx + 8]
// 0057e7c9  50                   push eax
// 0057e7ca  ffd1                 call ecx
// 0057e7cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057e7d0  83c404               add esp, 4
// 0057e7d3  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e7da  83c434               add esp, 0x34
// 0057e7dd  c3                   ret 

struct TypedStatsItem {
    void update();
};

extern "C" void __cdecl func_00413c00();
extern "C" void __cdecl func_00414170();

void TypedStatsItem::update()
{
    if (*(int*)this == 0) {
        func_00413c00();
        func_00414170();
    }
    void (*fn)(void*) = *(void(**)(void*))((char*)this + 8);
    fn(*(void**)((char*)this + 4));
}
