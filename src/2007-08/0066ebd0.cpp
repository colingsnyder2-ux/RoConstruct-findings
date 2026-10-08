// from server: 83% by colin
// roc 2007-08 0066ebd0  unit: CXTPDockingPaneManager  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ebd0
//
// 0066ebd0  56                   push esi
// 0066ebd1  e88af5ffff           call 0x66e160
// 0066ebd6  8b7004               mov esi, dword ptr [eax + 4]
// 0066ebd9  85f6                 test esi, esi
// 0066ebdb  7413                 je 0x66ebf0
// 0066ebdd  8d4900               lea ecx, [ecx]
// 0066ebe0  8bc6                 mov eax, esi
// 0066ebe2  8b4808               mov ecx, dword ptr [eax + 8]
// 0066ebe5  8b36                 mov esi, dword ptr [esi]
// 0066ebe7  e8a4100200           call 0x68fc90
// 0066ebec  85f6                 test esi, esi
// 0066ebee  75f0                 jne 0x66ebe0
// 0066ebf0  5e                   pop esi
// 0066ebf1  c3                   ret 

struct CXTPDockingPaneManager {
    void func_0066ebd0();
};

extern "C" void* __cdecl func_0066e160();
extern "C" void __cdecl func_0068fc90(void*);

void CXTPDockingPaneManager::func_0066ebd0()
{
    void* p = func_0066e160();
    void* node = *(void**)((char*)p + 4);
    while (node != 0) {
        void* cur = node;
        node = *(void**)cur;
        func_0068fc90(*(void**)((char*)cur + 8));
    }
}
