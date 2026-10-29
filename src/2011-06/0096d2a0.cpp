// roc 2011-06 0096d2a0  unit: Ogre::RbxSceneUpdater  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0096d2a0
//
// 0096d2a0  83ec08               sub esp, 8
// 0096d2a3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096d2a7  53                   push ebx
// 0096d2a8  56                   push esi
// 0096d2a9  57                   push edi
// 0096d2aa  8bf1                 mov esi, ecx
// 0096d2ac  50                   push eax
// 0096d2ad  8d4c2410             lea ecx, [esp + 0x10]
// 0096d2b1  51                   push ecx
// 0096d2b2  8bce                 mov ecx, esi
// 0096d2b4  e8b7ebffff           call 0x96be70
// 0096d2b9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0096d2bd  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0096d2c1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0096d2c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0096d2cd  52                   push edx
// 0096d2ce  8d44241c             lea eax, [esp + 0x1c]
// 0096d2d2  50                   push eax
// 0096d2d3  57                   push edi
// 0096d2d4  53                   push ebx
// 0096d2d5  e8c6efffff           call 0x96c2a0
// 0096d2da  83c410               add esp, 0x10
// 0096d2dd  57                   push edi
// 0096d2de  53                   push ebx
// 0096d2df  8d4c2414             lea ecx, [esp + 0x14]
// 0096d2e3  51                   push ecx
// 0096d2e4  8bce                 mov ecx, esi
// 0096d2e6  e885faffff           call 0x96cd70
// 0096d2eb  8b442418             mov eax, dword ptr [esp + 0x18]
// 0096d2ef  5f                   pop edi
// 0096d2f0  5e                   pop esi
// 0096d2f1  5b                   pop ebx
// 0096d2f2  83c408               add esp, 8
// 0096d2f5  c20400               ret 4
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEIABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;