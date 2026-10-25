// from server: 100% by king_originala
// roc 2008-06 0042c2c0  unit: CLuaHtmlView::Binder  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042c2c0
//
// 0042c2c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042c2c4  83f803               cmp eax, 3
// 0042c2c7  7442                 je 0x42c30b
// 0042c2c9  85c0                 test eax, eax
// 0042c2cb  750d                 jne 0x42c2da
// 0042c2cd  8b442404             mov eax, dword ptr [esp + 4]
// 0042c2d1  8b08                 mov ecx, dword ptr [eax]
// 0042c2d3  8b542408             mov edx, dword ptr [esp + 8]
// 0042c2d7  890a                 mov dword ptr [edx], ecx
// 0042c2d9  c3                   ret 
// 0042c2da  83f801               cmp eax, 1
// 0042c2dd  750b                 jne 0x42c2ea
// 0042c2df  8b442408             mov eax, dword ptr [esp + 8]
// 0042c2e3  c70000000000         mov dword ptr [eax], 0
// 0042c2e9  c3                   ret 
// 0042c2ea  56                   push esi
// 0042c2eb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042c2ef  8b0e                 mov ecx, dword ptr [esi]
// 0042c2f1  6808eb9200           push 0x92eb08
// 0042c2f6  ff1578288000         call dword ptr [0x802878]
// 0042c2fc  0fb6c8               movzx ecx, al
// 0042c2ff  f7d9                 neg ecx
// 0042c301  1bc9                 sbb ecx, ecx
// 0042c303  234c2408             and ecx, dword ptr [esp + 8]
// 0042c307  890e                 mov dword ptr [esi], ecx
// 0042c309  5e                   pop esi
// 0042c30a  c3                   ret 
// 0042c30b  8b542408             mov edx, dword ptr [esp + 8]
// 0042c30f  c70208eb9200         mov dword ptr [edx], 0x92eb08
// 0042c315  c3                   ret 

struct TypeInfo
{
    char data[1];
};

extern const TypeInfo function_type;
extern bool (__thiscall *type_equal)(const TypeInfo *, const TypeInfo *);

void manage(const void *source, const void **destination, int operation)
{
    if (operation != 3)
    {
        if (operation == 0)
        {
            *destination = *static_cast<const void *const *>(source);
            return;
        }

        if (operation == 1)
        {
            *destination = 0;
            return;
        }

        *destination = type_equal(
            static_cast<const TypeInfo *>(*destination),
            &function_type) ? source : 0;
    }
    else
    {
        *destination = &function_type;
    }
}
