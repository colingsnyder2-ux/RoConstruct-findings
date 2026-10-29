// roc 2011-06 004f01a0  unit: RBX::RbxRay  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f01a0
//
// 004f01a0  6aff                 push -1
// 004f01a2  68d32b9f00           push 0x9f2bd3
// 004f01a7  64a100000000         mov eax, dword ptr fs:[0]
// 004f01ad  50                   push eax
// 004f01ae  64892500000000       mov dword ptr fs:[0], esp
// 004f01b5  83ec20               sub esp, 0x20
// 004f01b8  56                   push esi
// 004f01b9  8b742438             mov esi, dword ptr [esp + 0x38]
// 004f01bd  c744240400000000     mov dword ptr [esp + 4], 0
// 004f01c5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004f01c8  8b4004               mov eax, dword ptr [eax + 4]
// 004f01cb  83c004               add eax, 4
// 004f01ce  684888a700           push 0xa78848
// 004f01d3  50                   push eax
// 004f01d4  8d4c2410             lea ecx, [esp + 0x10]
// 004f01d8  51                   push ecx
// 004f01d9  ff155004a400         call dword ptr [0xa40450]
// 004f01df  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f01e2  8b742440             mov esi, dword ptr [esp + 0x40]
// 004f01e6  83c104               add ecx, 4
// 004f01e9  51                   push ecx
// 004f01ea  50                   push eax
// 004f01eb  56                   push esi
// 004f01ec  c744244401000000     mov dword ptr [esp + 0x44], 1
// 004f01f4  ff155404a400         call dword ptr [0xa40454]
// 004f01fa  83c418               add esp, 0x18
// 004f01fd  8d4c2408             lea ecx, [esp + 8]
// 004f0201  c744240401000000     mov dword ptr [esp + 4], 1
// 004f0209  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004f020e  ff15d004a400         call dword ptr [0xa404d0]
// 004f0214  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f0218  8bc6                 mov eax, esi
// 004f021a  5e                   pop esi
// 004f021b  64890d00000000       mov dword ptr fs:[0], ecx
// 004f0222  83c42c               add esp, 0x2c
// 004f0225  c20800               ret 8
// copied from an identical function in another client (function ?describe@Reporter@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVMemberDescriptor@Reflection@RBX@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#include <string>
namespace RBX {
class Name {
public:
    int dictionaryIndex;
    std::string name;
    const std::string& toString() const { return name; }
};
namespace Reflection {
class Descriptor {
public:
    virtual ~Descriptor() {}
    const Name& name;
};
class ClassDescriptor : public Descriptor {};
class MemberDescriptor : public Descriptor {
public:
    int category;
    const ClassDescriptor& owner;
};
}
}
class Reporter {
public:
    std::string describe(const RBX::Reflection::MemberDescriptor* desc);
};

std::string Reporter::describe(const RBX::Reflection::MemberDescriptor* desc)
{
    return desc->owner.name.toString() + ":" + desc->name.toString();
}