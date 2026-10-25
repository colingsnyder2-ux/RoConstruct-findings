// from server: 100% by king_originala
// roc 2008-06 006524b0  unit: RBX::ScoreHud  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006524b0
//
// 006524b0  51                   push ecx
// 006524b1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006524b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 006524b9  53                   push ebx
// 006524ba  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006524be  56                   push esi
// 006524bf  8b742414             mov esi, dword ptr [esp + 0x14]
// 006524c3  57                   push edi
// 006524c4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006524c8  c644240c00           mov byte ptr [esp + 0xc], 0
// 006524cd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006524d1  50                   push eax
// 006524d2  51                   push ecx
// 006524d3  52                   push edx
// 006524d4  57                   push edi
// 006524d5  56                   push esi
// 006524d6  53                   push ebx
// 006524d7  e844f5ffff           call 0x651a20
// 006524dc  2bf3                 sub esi, ebx
// 006524de  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006524e3  f7ee                 imul esi
// 006524e5  c1fa02               sar edx, 2
// 006524e8  8bc2                 mov eax, edx
// 006524ea  c1e81f               shr eax, 0x1f
// 006524ed  03c2                 add eax, edx
// 006524ef  8d0440               lea eax, [eax + eax*2]
// 006524f2  03c0                 add eax, eax
// 006524f4  03c0                 add eax, eax
// 006524f6  03c0                 add eax, eax
// 006524f8  83c418               add esp, 0x18
// 006524fb  8bc8                 mov ecx, eax
// 006524fd  8bc7                 mov eax, edi
// 006524ff  5f                   pop edi
// 00652500  5e                   pop esi
// 00652501  2bc1                 sub eax, ecx
// 00652503  5b                   pop ebx
// 00652504  59                   pop ecx
// 00652505  c3                   ret 

struct Element {
    char data[24];
};

struct IteratorTag {};
struct CopyTag {
    char value;
};

extern Element* __cdecl copy_backward_impl(
    Element*, Element*, Element*, IteratorTag, IteratorTag, CopyTag);

Element* __cdecl copy_backward(Element* first, Element* last, Element* destination)
{
    IteratorTag inputTag;
    IteratorTag outputTag;
    CopyTag copyTag;
    copyTag.value = 0;

    copy_backward_impl(first, last, destination, inputTag, outputTag, copyTag);
    return destination - (last - first);
}
