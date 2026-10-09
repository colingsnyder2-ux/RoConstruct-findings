// from server: 98% by colin
// roc 2007-08 004485c0  unit: CIDEDocManager  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004485c0
//
// 004485c0  53                   push ebx
// 004485c1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004485c5  85db                 test ebx, ebx
// 004485c7  750f                 jne 0x4485d8
// 004485c9  53                   push ebx
// 004485ca  53                   push ebx
// 004485cb  6a01                 push 1
// 004485cd  68050000c0           push 0xc0000005
// 004485d2  ff150cd37700         call dword ptr [0x77d30c]
// 004485d8  56                   push esi
// 004485d9  8b7308               mov esi, dword ptr [ebx + 8]
// 004485dc  85f6                 test esi, esi
// 004485de  741c                 je 0x4485fc
// 004485e0  57                   push edi
// 004485e1  8b4604               mov eax, dword ptr [esi + 4]
// 004485e4  8b0e                 mov ecx, dword ptr [esi]
// 004485e6  50                   push eax
// 004485e7  ffd1                 call ecx
// 004485e9  8b7e08               mov edi, dword ptr [esi + 8]
// 004485ec  56                   push esi
// 004485ed  e870761e00           call 0x62fc62
// 004485f2  83c404               add esp, 4
// 004485f5  85ff                 test edi, edi
// 004485f7  8bf7                 mov esi, edi
// 004485f9  75e6                 jne 0x4485e1
// 004485fb  5f                   pop edi
// 004485fc  5e                   pop esi
// 004485fd  c7430800000000       mov dword ptr [ebx + 8], 0
// 00448604  5b                   pop ebx
// 00448605  c20400               ret 4

extern "C" __declspec(dllimport) void __stdcall RaiseException(unsigned long, unsigned long, unsigned long, const unsigned long*);
extern "C" void __cdecl sub_62FC62(void*);

struct Node {
    void (__stdcall *callback)(void*);
    void* arg;
    Node* next;
};

struct CIDEDocManager {
    void clear(Node* node);
};

void CIDEDocManager::clear(Node* node) {
    if (node == 0) {
        RaiseException(0xC0000005, 1, 0, 0);
    }
    Node* cur = node->next;
    while (cur != 0) {
        cur->callback(cur->arg);
        Node* next = cur->next;
        sub_62FC62(cur);
        cur = next;
    }
    node->next = 0;
}
