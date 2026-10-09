// from server: 20% by colin
// roc 2007-08 0054aad0  unit: RBX::ServiceProvider  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054aad0
//
// 0054aad0  6aff                 push -1
// 0054aad2  688c237500           push 0x75238c
// 0054aad7  64a100000000         mov eax, dword ptr fs:[0]
// 0054aadd  50                   push eax
// 0054aade  64892500000000       mov dword ptr fs:[0], esp
// 0054aae5  51                   push ecx
// 0054aae6  56                   push esi
// 0054aae7  8bf1                 mov esi, ecx
// 0054aae9  89742404             mov dword ptr [esp + 4], esi
// 0054aaed  8d4e34               lea ecx, [esi + 0x34]
// 0054aaf0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054aaf8  ff15ace67700         call dword ptr [0x77e6ac]
// 0054aafe  8d4e18               lea ecx, [esi + 0x18]
// 0054ab01  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0054ab09  ff15ace67700         call dword ptr [0x77e6ac]
// 0054ab0f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054ab13  5e                   pop esi
// 0054ab14  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ab1b  83c410               add esp, 0x10
// 0054ab1e  c3                   ret 

struct ServiceProvider
{
    char pad0[0x18];
    char field18[0x1c];
    char field34[0x4c];

    void destroy();
};

extern "C" void __stdcall sub_77E6AC();

void ServiceProvider::destroy()
{
    sub_77E6AC();
    sub_77E6AC();
}
