// from server: 94% by colin
// roc 2007-08 00460040  unit: CScriptEditor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460040
//
// 00460040  56                   push esi
// 00460041  e8ead1ffff           call 0x45d230
// 00460046  8bf0                 mov esi, eax
// 00460048  6a01                 push 1
// 0046004a  8bce                 mov ecx, esi
// 0046004c  e80fbfffff           call 0x45bf60
// 00460051  6a01                 push 1
// 00460053  50                   push eax
// 00460054  8bce                 mov ecx, esi
// 00460056  e8f5c9ffff           call 0x45ca50
// 0046005b  6a01                 push 1
// 0046005d  6a01                 push 1
// 0046005f  83c001               add eax, 1
// 00460062  50                   push eax
// 00460063  8bce                 mov ecx, esi
// 00460065  e8b6c2ffff           call 0x45c320
// 0046006a  85c0                 test eax, eax
// 0046006c  7c0c                 jl 0x46007a
// 0046006e  6a01                 push 1
// 00460070  50                   push eax
// 00460071  8bce                 mov ecx, esi
// 00460073  e858c0ffff           call 0x45c0d0
// 00460078  5e                   pop esi
// 00460079  c3                   ret 
// 0046007a  6a10                 push 0x10
// 0046007c  ff157ced7700         call dword ptr [0x77ed7c]
// 00460082  5e                   pop esi
// 00460083  c3                   ret 

extern "C" int __stdcall MessageBeep(unsigned int uType);

struct CScriptEditor {
    int method_45d230();
    int method_45bf60(int);
    int method_45ca50(int, int);
    int method_45c320(int, int, int);
    int method_45c0d0(int, int);
    int func_00460040();
};

int CScriptEditor::func_00460040()
{
    int v = method_45d230();
    int a = method_45bf60(1);
    int b = method_45ca50(a, 1);
    int c = method_45c320(b + 1, 1, 1);
    if (c >= 0)
    {
        return method_45c0d0(c, 1);
    }
    MessageBeep(0x10);
    return 0;
}
