// from server: 95% by colin
// roc 2007-08 006c6b70  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6b70
//
// 006c6b70  56                   push esi
// 006c6b71  8bf1                 mov esi, ecx
// 006c6b73  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 006c6b79  83b8f400000002       cmp dword ptr [eax + 0xf4], 2
// 006c6b80  7514                 jne 0x6c6b96
// 006c6b82  8b16                 mov edx, dword ptr [esi]
// 006c6b84  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 006c6b8a  6a00                 push 0
// 006c6b8c  ffd0                 call eax
// 006c6b8e  f7d8                 neg eax
// 006c6b90  1bc0                 sbb eax, eax
// 006c6b92  f7d8                 neg eax
// 006c6b94  5e                   pop esi
// 006c6b95  c3                   ret 
// 006c6b96  e8e531f7ff           call 0x639d80
// 006c6b9b  83f802               cmp eax, 2
// 006c6b9e  740c                 je 0x6c6bac
// 006c6ba0  8bce                 mov ecx, esi
// 006c6ba2  e8d931f7ff           call 0x639d80
// 006c6ba7  83f803               cmp eax, 3
// 006c6baa  7519                 jne 0x6c6bc5
// 006c6bac  8b16                 mov edx, dword ptr [esi]
// 006c6bae  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 006c6bb4  6a00                 push 0
// 006c6bb6  8bce                 mov ecx, esi
// 006c6bb8  ffd0                 call eax
// 006c6bba  85c0                 test eax, eax
// 006c6bbc  7407                 je 0x6c6bc5
// 006c6bbe  b801000000           mov eax, 1
// 006c6bc3  5e                   pop esi
// 006c6bc4  c3                   ret 
// 006c6bc5  33c0                 xor eax, eax
// 006c6bc7  5e                   pop esi
// 006c6bc8  c3                   ret 

struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad[0xfc];
    int field_0xfc;
    int CanClose();
};

extern "C" int __fastcall sub_639d80(CXTPCustomizeSheet_CCustomizeEdit* self);

int CXTPCustomizeSheet_CCustomizeEdit::CanClose()
{
    if (*(int*)(field_0xfc + 0xf4) == 2)
    {
        int (__stdcall *fn)(int) = *(int (__stdcall **)(int))((*(int*)this) + 0xa8);
        int r = fn(0);
        return (r != 0) ? 1 : 0;
    }
    int v = sub_639d80(this);
    if (v == 2 || (v = sub_639d80(this), v == 3))
    {
        int (__stdcall *fn)(int) = *(int (__stdcall **)(int))((*(int*)this) + 0xa8);
        int r = fn(0);
        if (r != 0)
            return 1;
    }
    return 0;
}
