// from server: 91% by colin
// roc 2007-08 0069bb10  unit: CXTPPropertyGridView  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bb10
//
// 0069bb10  53                   push ebx
// 0069bb11  8bd9                 mov ebx, ecx
// 0069bb13  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0069bb16  85c0                 test eax, eax
// 0069bb18  745c                 je 0x69bb76
// 0069bb1a  56                   push esi
// 0069bb1b  57                   push edi
// 0069bb1c  8b3dd8ec7700         mov edi, dword ptr [0x77ecd8]
// 0069bb22  33f6                 xor esi, esi
// 0069bb24  56                   push esi
// 0069bb25  56                   push esi
// 0069bb26  688b010000           push 0x18b
// 0069bb2b  50                   push eax
// 0069bb2c  ffd7                 call edi
// 0069bb2e  85c0                 test eax, eax
// 0069bb30  7e42                 jle 0x69bb74
// 0069bb32  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0069bb35  6a00                 push 0
// 0069bb37  56                   push esi
// 0069bb38  6899010000           push 0x199
// 0069bb3d  50                   push eax
// 0069bb3e  ffd7                 call edi
// 0069bb40  85c0                 test eax, eax
// 0069bb42  741a                 je 0x69bb5e
// 0069bb44  39b080000000         cmp dword ptr [eax + 0x80], esi
// 0069bb4a  7412                 je 0x69bb5e
// 0069bb4c  8b10                 mov edx, dword ptr [eax]
// 0069bb4e  89b080000000         mov dword ptr [eax + 0x80], esi
// 0069bb54  8bc8                 mov ecx, eax
// 0069bb56  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0069bb5c  ffd0                 call eax
// 0069bb5e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0069bb61  6a00                 push 0
// 0069bb63  6a00                 push 0
// 0069bb65  688b010000           push 0x18b
// 0069bb6a  51                   push ecx
// 0069bb6b  83c601               add esi, 1
// 0069bb6e  ffd7                 call edi
// 0069bb70  3bf0                 cmp esi, eax
// 0069bb72  7cbe                 jl 0x69bb32
// 0069bb74  5f                   pop edi
// 0069bb75  5e                   pop esi
// 0069bb76  5b                   pop ebx
// 0069bb77  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPPropertyGridView {
    char pad[0x20];
    void* m_hWnd;
    void ClearSelection();
};

void CXTPPropertyGridView::ClearSelection()
{
    if (m_hWnd == 0)
        return;

    int count = (int)SendMessageA(m_hWnd, 0x18b, 0, 0);
    if (count <= 0)
        return;

    int i = 0;
    do {
        void* item = (void*)SendMessageA(m_hWnd, 0x199, i, 0);
        if (item != 0 && *(int*)((char*)item + 0x80) != i) {
            *(int*)((char*)item + 0x80) = i;
            (*(void(__thiscall**)(void*))(*(int*)item + 0xa8))(item);
        }
        i++;
        count = (int)SendMessageA(m_hWnd, 0x18b, 0, 0);
    } while (i < count);
}
