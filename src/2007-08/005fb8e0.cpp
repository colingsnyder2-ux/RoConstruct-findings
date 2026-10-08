// from server: 54% by colin
// roc 2007-08 005fb8e0  unit: RBX::AnchorTool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb8e0
//
// 005fb8e0  51                   push ecx
// 005fb8e1  83792000             cmp dword ptr [ecx + 0x20], 0
// 005fb8e5  56                   push esi
// 005fb8e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fb8ea  c744240400000000     mov dword ptr [esp + 4], 0
// 005fb8f2  741a                 je 0x5fb90e
// 005fb8f4  80792800             cmp byte ptr [ecx + 0x28], 0
// 005fb8f8  8bce                 mov ecx, esi
// 005fb8fa  7414                 je 0x5fb910
// 005fb8fc  6838247c00           push 0x7c2438
// 005fb901  ff1598e67700         call dword ptr [0x77e698]
// 005fb907  8bc6                 mov eax, esi
// 005fb909  5e                   pop esi
// 005fb90a  59                   pop ecx
// 005fb90b  c20400               ret 4
// 005fb90e  8bce                 mov ecx, esi
// 005fb910  6828247c00           push 0x7c2428
// 005fb915  ff1598e67700         call dword ptr [0x77e698]
// 005fb91b  8bc6                 mov eax, esi
// 005fb91d  5e                   pop esi
// 005fb91e  59                   pop ecx
// 005fb91f  c20400               ret 4

struct AnchorTool {
    char pad0[0x20];
    int m_field20;
    char pad1[4];
    bool m_field28;
    void* getCursorName(void* result);
};

extern "C" void* __stdcall string_ctor(void* self, const char* str);

void* AnchorTool::getCursorName(void* result)
{
    if (m_field20 != 0) {
        if (m_field28 != 0) {
            string_ctor(result, (const char*)0x7c2438);
            return result;
        }
    }
    string_ctor(result, (const char*)0x7c2428);
    return result;
}
