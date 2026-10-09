// roc 2008-06 006099c0  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006099c0
//
// 006099c0  8b442404             mov eax, dword ptr [esp + 4]
// 006099c4  56                   push esi
// 006099c5  8bf1                 mov esi, ecx
// 006099c7  398694010000         cmp dword ptr [esi + 0x194], eax
// 006099cd  7422                 je 0x6099f1
// 006099cf  898694010000         mov dword ptr [esi + 0x194], eax
// 006099d5  8b06                 mov eax, dword ptr [esi]
// 006099d7  8b5048               mov edx, dword ptr [eax + 0x48]
// 006099da  ffd2                 call edx
// 006099dc  8b06                 mov eax, dword ptr [esi]
// 006099de  8b504c               mov edx, dword ptr [eax + 0x4c]
// 006099e1  8bce                 mov ecx, esi
// 006099e3  ffd2                 call edx
// 006099e5  6894b99700           push 0x97b994
// 006099ea  8bce                 mov ecx, esi
// 006099ec  e80f41e0ff           call 0x40db00
// 006099f1  5e                   pop esi
// 006099f2  c20400               ret 4
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?setControllerType@PVInstance@RBX@@QAEXW4ControllerType@Controller@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
