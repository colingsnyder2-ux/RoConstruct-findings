// from server: 24% by colin
// roc 2007-08 006a7870  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7870
//
// 006a7870  6aff                 push -1
// 006a7872  68184b7600           push 0x764b18
// 006a7877  64a100000000         mov eax, dword ptr fs:[0]
// 006a787d  50                   push eax
// 006a787e  51                   push ecx
// 006a787f  56                   push esi
// 006a7880  a188518b00           mov eax, dword ptr [0x8b5188]
// 006a7885  33c4                 xor eax, esp
// 006a7887  50                   push eax
// 006a7888  8d44240c             lea eax, [esp + 0xc]
// 006a788c  64a300000000         mov dword ptr fs:[0], eax
// 006a7892  8bf1                 mov esi, ecx
// 006a7894  89742408             mov dword ptr [esp + 8], esi
// 006a7898  e8638cfcff           call 0x670500
// 006a789d  6a18                 push 0x18
// 006a789f  8bce                 mov ecx, esi
// 006a78a1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a78a9  c706b44b7d00         mov dword ptr [esi], 0x7d4bb4
// 006a78af  c74620544b7d00       mov dword ptr [esi + 0x20], 0x7d4b54
// 006a78b6  e86528f9ff           call 0x63a120
// 006a78bb  8bc6                 mov eax, esi
// 006a78bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a78c1  64890d00000000       mov dword ptr fs:[0], ecx
// 006a78c8  59                   pop ecx
// 006a78c9  5e                   pop esi
// 006a78ca  83c410               add esp, 0x10
// 006a78cd  c3                   ret 

struct CXTPRibbonScrollableBar_CControlGroupsScroll
{
    void Construct();
};

extern "C" void __stdcall sub_670500();
extern "C" void __stdcall sub_63A120(int);

void CXTPRibbonScrollableBar_CControlGroupsScroll::Construct()
{
    sub_670500();
    *(void**)this = (void*)0x7d4bb4;
    *(void**)((char*)this + 0x20) = (void*)0x7d4b54;
    sub_63A120(0x18);
}
