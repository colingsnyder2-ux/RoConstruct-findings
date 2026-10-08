// from server: 59% by colin
// roc 2007-08 0045d310  unit: Scintilla::CScintillaView  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d310
//
// 0045d310  56                   push esi
// 0045d311  57                   push edi
// 0045d312  8d7158               lea esi, [ecx + 0x58]
// 0045d315  6a01                 push 1
// 0045d317  8bce                 mov ecx, esi
// 0045d319  e802faffff           call 0x45cd20
// 0045d31e  6a01                 push 1
// 0045d320  8bce                 mov ecx, esi
// 0045d322  8bf8                 mov edi, eax
// 0045d324  e8a7f4ffff           call 0x45c7d0
// 0045d329  85ff                 test edi, edi
// 0045d32b  740b                 je 0x45d338
// 0045d32d  3bc7                 cmp eax, edi
// 0045d32f  7407                 je 0x45d338
// 0045d331  b801000000           mov eax, 1
// 0045d336  eb02                 jmp 0x45d33a
// 0045d338  33c0                 xor eax, eax
// 0045d33a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045d33e  8b11                 mov edx, dword ptr [ecx]
// 0045d340  5f                   pop edi
// 0045d341  5e                   pop esi
// 0045d342  89442404             mov dword ptr [esp + 4], eax
// 0045d346  8b02                 mov eax, dword ptr [edx]
// 0045d348  ffe0                 jmp eax

struct CScintillaView {
    char pad[0x58];
    int field_58;
    int sub_45cd20(int);
    int sub_45c7d0(int);
    int method(int);
};

int CScintillaView::method(int arg)
{
    int a = sub_45cd20(1);
    int b = sub_45c7d0(1);
    int result = (a != 0 && b != a) ? 1 : 0;
    return result;
}
