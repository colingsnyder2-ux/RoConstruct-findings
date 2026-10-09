// from server: 87% by colin
// roc 2007-08 0066f0c0  unit: CXTPDockingPaneManager  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066f0c0
//
// 0066f0c0  56                   push esi
// 0066f0c1  57                   push edi
// 0066f0c2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066f0c6  8d44240c             lea eax, [esp + 0xc]
// 0066f0ca  50                   push eax
// 0066f0cb  8bf1                 mov esi, ecx
// 0066f0cd  c70700000000         mov dword ptr [edi], 0
// 0066f0d3  e8f8220000           call 0x6713d0
// 0066f0d8  85c0                 test eax, eax
// 0066f0da  7e26                 jle 0x66f102
// 0066f0dc  8b767c               mov esi, dword ptr [esi + 0x7c]
// 0066f0df  3b4634               cmp eax, dword ptr [esi + 0x34]
// 0066f0e2  7f1e                 jg 0x66f102
// 0066f0e4  83c0ff               add eax, -1
// 0066f0e7  50                   push eax
// 0066f0e8  8d4e28               lea ecx, [esi + 0x28]
// 0066f0eb  e8101f0a00           call 0x711000
// 0066f0f0  8b4008               mov eax, dword ptr [eax + 8]
// 0066f0f3  85c0                 test eax, eax
// 0066f0f5  740b                 je 0x66f102
// 0066f0f7  6a01                 push 1
// 0066f0f9  8bc8                 mov ecx, eax
// 0066f0fb  e8c4920c00           call 0x7383c4
// 0066f100  8907                 mov dword ptr [edi], eax
// 0066f102  5f                   pop edi
// 0066f103  33c0                 xor eax, eax
// 0066f105  5e                   pop esi
// 0066f106  c21400               ret 0x14

struct CXTPDockingPaneManager {
    char pad[0x7c];
    void* field_7c;
    int GetPaneByIndex(int index, int* out);
    int sub_66F0C0(int a2, int a3, int a4, int a5, int* out);
};

struct CXTPPaneList {
    char pad[0x28];
    char field_28[0x0c];
    int GetAt(int index);
};

struct CXTPPane {
    char pad[8];
    int field_8;
    int Activate(int flag);
};

extern "C" int __stdcall sub_6713D0(int* out);
extern "C" int __stdcall sub_711000(void* list, int index);
extern "C" int __stdcall sub_7383C4(void* pane, int flag);

int CXTPDockingPaneManager::sub_66F0C0(int a2, int a3, int a4, int a5, int* out) {
    int local;
    *out = 0;
    int result = sub_6713D0(&local);
    if (result > 0) {
        CXTPPaneList* list = (CXTPPaneList*)field_7c;
        if (result <= *(int*)((char*)list + 0x34)) {
            int idx = result - 1;
            int pane = sub_711000((char*)list + 0x28, idx);
            pane = *(int*)(pane + 8);
            if (pane != 0) {
                int val = sub_7383C4((void*)pane, 1);
                *out = val;
            }
        }
    }
    return 0;
}
