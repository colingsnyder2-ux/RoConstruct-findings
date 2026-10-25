// from server: 100% by king_originala
// roc 2008-06 004e70c0  unit: RBX::ViewNew::Texture  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e70c0
//
// 004e70c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e70c4  83f803               cmp eax, 3
// 004e70c7  741e                 je 0x4e70e7
// 004e70c9  8b542408             mov edx, dword ptr [esp + 8]
// 004e70cd  c644240c00           mov byte ptr [esp + 0xc], 0
// 004e70d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e70d6  51                   push ecx
// 004e70d7  50                   push eax
// 004e70d8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e70dc  52                   push edx
// 004e70dd  50                   push eax
// 004e70de  e8bdf2ffff           call 0x4e63a0
// 004e70e3  83c410               add esp, 0x10
// 004e70e6  c3                   ret 
// 004e70e7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e70eb  c70178169400         mov dword ptr [ecx], 0x941678
// 004e70f1  c3                   ret 

struct Tag {};

extern char typeTag;
extern "C" void __cdecl helper(int, void *, int, Tag);

void __cdecl f(int a, void *b, int c)
{
    if (c != 3) {
        helper(a, b, c, Tag());
        return;
    }
    *(void **)b = &typeTag;
}
