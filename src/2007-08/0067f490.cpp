// from server: 66% by colin
// roc 2007-08 0067f490  unit: CXTPControlSelector  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f490
//
// 0067f490  56                   push esi
// 0067f491  57                   push edi
// 0067f492  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067f496  8bcf                 mov ecx, edi
// 0067f498  33f6                 xor esi, esi
// 0067f49a  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0067f4a0  85c0                 test eax, eax
// 0067f4a2  7e46                 jle 0x67f4ea
// 0067f4a4  56                   push esi
// 0067f4a5  8bcf                 mov ecx, edi
// 0067f4a7  ff1578d57700         call dword ptr [0x77d578]
// 0067f4ad  3c26                 cmp al, 0x26
// 0067f4af  752a                 jne 0x67f4db
// 0067f4b1  8bcf                 mov ecx, edi
// 0067f4b3  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0067f4b9  83e801               sub eax, 1
// 0067f4bc  3bf0                 cmp esi, eax
// 0067f4be  7410                 je 0x67f4d0
// 0067f4c0  8d4601               lea eax, [esi + 1]
// 0067f4c3  50                   push eax
// 0067f4c4  8bcf                 mov ecx, edi
// 0067f4c6  ff1578d57700         call dword ptr [0x77d578]
// 0067f4cc  3c26                 cmp al, 0x26
// 0067f4ce  740b                 je 0x67f4db
// 0067f4d0  6a01                 push 1
// 0067f4d2  56                   push esi
// 0067f4d3  8bcf                 mov ecx, edi
// 0067f4d5  ff1530da7700         call dword ptr [0x77da30]
// 0067f4db  8bcf                 mov ecx, edi
// 0067f4dd  83c601               add esi, 1
// 0067f4e0  ff15c8dc7700         call dword ptr [0x77dcc8]
// 0067f4e6  3bf0                 cmp esi, eax
// 0067f4e8  7cba                 jl 0x67f4a4
// 0067f4ea  5f                   pop edi
// 0067f4eb  5e                   pop esi
// 0067f4ec  c3                   ret 

struct CXTPControlSelector {
    int GetCount();
    char GetCharAt(int index);
    void SetSelected(int index, int selected);
    void ProcessAccelerators();
};

void CXTPControlSelector::ProcessAccelerators()
{
    int i = 0;
    while (i < GetCount())
    {
        if (GetCharAt(i) == '&')
        {
            if (i == GetCount() - 1 || GetCharAt(i + 1) != '&')
            {
                SetSelected(i, 1);
            }
        }
        i++;
    }
}
