// from server: 31% by colin
// roc 2007-08 005fd740  unit: RBX::GrabTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd740
//
// 005fd740  6aff                 push -1
// 005fd742  6888ad7500           push 0x75ad88
// 005fd747  64a100000000         mov eax, dword ptr fs:[0]
// 005fd74d  50                   push eax
// 005fd74e  64892500000000       mov dword ptr fs:[0], esp
// 005fd755  51                   push ecx
// 005fd756  56                   push esi
// 005fd757  8bf1                 mov esi, ecx
// 005fd759  89742404             mov dword ptr [esp + 4], esi
// 005fd75d  c706ec257c00         mov dword ptr [esi], 0x7c25ec
// 005fd763  c74604d4257c00       mov dword ptr [esi + 4], 0x7c25d4
// 005fd76a  8d4e20               lea ecx, [esi + 0x20]
// 005fd76d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fd775  ff15ace67700         call dword ptr [0x77e6ac]
// 005fd77b  8bce                 mov ecx, esi
// 005fd77d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fd785  e8c665feff           call 0x5e3d50
// 005fd78a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd78e  5e                   pop esi
// 005fd78f  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd796  83c410               add esp, 0x10
// 005fd799  c3                   ret 

struct MouseCommand {
    char pad[0x20];
    void* cursor;
};

struct GrabTool : MouseCommand {
    void construct();
};

void GrabTool::construct()
{
    *(void**)this = (void*)0x7c25ec;
    *(void**)((char*)this + 4) = (void*)0x7c25d4;
    cursor = 0;
    // call std::string destructor on cursor
    extern void __stdcall string_dtor(void*);
    string_dtor((char*)this + 0x20);
    // call base class destructor
    extern void __stdcall base_dtor(void*);
    base_dtor(this);
}
