// from server: 76% by colin
// roc 2007-08 0045f920  unit: CScriptEditor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f920
//
// 0045f920  837c240800           cmp dword ptr [esp + 8], 0
// 0045f925  0f95c0               setne al
// 0045f928  84c0                 test al, al
// 0045f92a  884139               mov byte ptr [ecx + 0x39], al
// 0045f92d  7509                 jne 0x45f938
// 0045f92f  38413a               cmp byte ptr [ecx + 0x3a], al
// 0045f932  7404                 je 0x45f938
// 0045f934  33c0                 xor eax, eax
// 0045f936  eb05                 jmp 0x45f93d
// 0045f938  b801000000           mov eax, 1
// 0045f93d  6a01                 push 1
// 0045f93f  50                   push eax
// 0045f940  81c1f4feffff         add ecx, 0xfffffef4
// 0045f946  e8e5d8ffff           call 0x45d230
// 0045f94b  8bc8                 mov ecx, eax
// 0045f94d  e87ed1ffff           call 0x45cad0
// 0045f952  c20800               ret 8

struct CScriptEditor {
    char pad[0x39];
    unsigned char m_flag39;
    unsigned char m_flag3a;
    int sub_45d230(int, int);
    int sub_45cad0();
    int func_0045f920(int, int);
};

int CScriptEditor::func_0045f920(int, int arg)
{
    unsigned char al = (arg != 0);
    m_flag39 = al;
    int eax;
    if (al != 0) {
        eax = 1;
    } else if (m_flag3a == al) {
        eax = 1;
    } else {
        eax = 0;
    }
    CScriptEditor* p = (CScriptEditor*)((char*)this - 0x10c);
    int r = p->sub_45d230(eax, 1);
    return ((CScriptEditor*)r)->sub_45cad0();
}
