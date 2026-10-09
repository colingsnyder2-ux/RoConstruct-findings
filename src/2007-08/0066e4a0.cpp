// from server: 76% by colin
// roc 2007-08 0066e4a0  unit: CXTPDockingPaneManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e4a0
//
// 0066e4a0  56                   push esi
// 0066e4a1  8bf1                 mov esi, ecx
// 0066e4a3  e8e8fcffff           call 0x66e190
// 0066e4a8  85c0                 test eax, eax
// 0066e4aa  7438                 je 0x66e4e4
// 0066e4ac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066e4b0  50                   push eax
// 0066e4b1  83ec10               sub esp, 0x10
// 0066e4b4  8bcc                 mov ecx, esp
// 0066e4b6  83c004               add eax, 4
// 0066e4b9  50                   push eax
// 0066e4ba  51                   push ecx
// 0066e4bb  ff15e0ed7700         call dword ptr [0x77ede0]
// 0066e4c1  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0066e4c7  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0066e4cd  50                   push eax
// 0066e4ce  e8ed9a0600           call 0x6d7fc0
// 0066e4d3  8bce                 mov ecx, esi
// 0066e4d5  e856ffffff           call 0x66e430
// 0066e4da  c7864001000001000000 mov dword ptr [esi + 0x140], 1
// 0066e4e4  33c0                 xor eax, eax
// 0066e4e6  5e                   pop esi
// 0066e4e7  c20800               ret 8

struct CXTPDockingPaneManager {
    char pad0[0xcc];
    int m_xcc;
    int m_xd0;
    char pad1[0x140 - 0xd4];
    int m_x140;
    int f(int a, int b);
};

extern "C" int __stdcall sub_66e190();
extern "C" int __stdcall sub_66e430();
extern "C" int __stdcall sub_6d7fc0(int, int);
extern "C" void __stdcall CopyRect(void*, const void*);

int CXTPDockingPaneManager::f(int a, int b)
{
    if (sub_66e190() != 0) {
        CopyRect((void*)((char*)&a + 4), (const void*)&a);
        sub_6d7fc0(m_xcc, m_xd0);
        sub_66e430();
        m_x140 = 1;
    }
    return 0;
}
