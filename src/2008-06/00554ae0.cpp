// from server: 100% by Gemini
// roc 2008-06 00554ae0  unit: RBX::RunService  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554ae0
//
// 00554ae0  83ec0c               sub esp, 0xc
// 00554ae3  56                   push esi
// 00554ae4  8bf1                 mov esi, ecx
// 00554ae6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554ae9  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00554aec  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00554aef  c1f902               sar ecx, 2
// 00554af2  57                   push edi
// 00554af3  33c0                 xor eax, eax
// 00554af5  8d7c2408             lea edi, [esp + 8]
// 00554af9  89442408             mov dword ptr [esp + 8], eax
// 00554afd  894c240c             mov dword ptr [esp + 0xc], ecx
// 00554b01  89542410             mov dword ptr [esp + 0x10], edx
// 00554b05  897e1c               mov dword ptr [esi + 0x1c], edi
// 00554b08  85c9                 test ecx, ecx
// 00554b0a  764c                 jbe 0x554b58
// 00554b0c  53                   push ebx
// 00554b0d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00554b11  55                   push ebp
// 00554b12  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00554b18  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00554b1b  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00554b1e  8bf8                 mov edi, eax
// 00554b20  c1f902               sar ecx, 2
// 00554b23  3bc1                 cmp eax, ecx
// 00554b25  7202                 jb 0x554b29
// 00554b27  ffd5                 call ebp
// 00554b29  8b5610               mov edx, dword ptr [esi + 0x10]
// 00554b2c  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00554b2f  50                   push eax
// 00554b30  53                   push ebx
// 00554b31  8bce                 mov ecx, esi
// 00554b33  e818fcffff           call 0x554750
// 00554b38  8b442410             mov eax, dword ptr [esp + 0x10]
// 00554b3c  40                   inc eax
// 00554b3d  89442410             mov dword ptr [esp + 0x10], eax
// 00554b41  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00554b45  72d1                 jb 0x554b18
// 00554b47  8b442418             mov eax, dword ptr [esp + 0x18]
// 00554b4b  5d                   pop ebp
// 00554b4c  5b                   pop ebx
// 00554b4d  5f                   pop edi
// 00554b4e  89461c               mov dword ptr [esi + 0x1c], eax
// 00554b51  5e                   pop esi
// 00554b52  83c40c               add esp, 0xc
// 00554b55  c20400               ret 4
// 00554b58  5f                   pop edi
// 00554b59  89561c               mov dword ptr [esi + 0x1c], edx
// 00554b5c  5e                   pop esi
// 00554b5d  83c40c               add esp, 0xc
// 00554b60  c20400               ret 4

#include <vector>

struct S {
    struct Cursor {
        size_t index;
        size_t limit;
        Cursor* previous;
    };

    virtual ~S();
    mutable std::vector<void*> listeners;
    mutable Cursor* current;

    void invoke(int argument, void* element) const;
    void run(int argument) const throw();
};

void S::run(int argument) const throw()
{
    Cursor cursor = { 0, listeners.size(), current };
    current = &cursor;

    while (cursor.index < cursor.limit) {
        invoke(argument, listeners[cursor.index++]);
    }

    current = cursor.previous;
}
