// from server: 85% by colin
// roc 2007-08 0045ff90  unit: CScriptEditor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ff90
//
// 0045ff90  56                   push esi
// 0045ff91  e89ad2ffff           call 0x45d230
// 0045ff96  8bf0                 mov esi, eax
// 0045ff98  6a01                 push 1
// 0045ff9a  8bce                 mov ecx, esi
// 0045ff9c  e8bfbfffff           call 0x45bf60
// 0045ffa1  6a01                 push 1
// 0045ffa3  50                   push eax
// 0045ffa4  8bce                 mov ecx, esi
// 0045ffa6  e8a5caffff           call 0x45ca50
// 0045ffab  6a01                 push 1
// 0045ffad  50                   push eax
// 0045ffae  8bce                 mov ecx, esi
// 0045ffb0  e82bc3ffff           call 0x45c2e0
// 0045ffb5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045ffb9  8b11                 mov edx, dword ptr [ecx]
// 0045ffbb  f7d0                 not eax
// 0045ffbd  83e001               and eax, 1
// 0045ffc0  5e                   pop esi
// 0045ffc1  89442404             mov dword ptr [esp + 4], eax
// 0045ffc5  8b02                 mov eax, dword ptr [edx]
// 0045ffc7  ffe0                 jmp eax

struct CScriptEditor {
    int method_45bf60(int);
    int method_45ca50(int, int);
    int method_45c2e0(int, int);

    int method_45ff90(int arg);
};

extern CScriptEditor* __cdecl func_45d230();

int CScriptEditor::method_45ff90(int arg)
{
    CScriptEditor* p = func_45d230();
    int a = p->method_45bf60(1);
    int b = p->method_45ca50(a, 1);
    int c = p->method_45c2e0(b, 1);
    int result = (~c) & 1;
    int (*fn)(int) = *(int (**)(int))arg;
    return fn(result);
}
