// roc 2007-08 0059ada0  unit: RBX::VCamera::?$FactoryProduct  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ada0
//
// 0059ada0  6aff                 push -1
// 0059ada2  6843ab7500           push 0x75ab43
// 0059ada7  64a100000000         mov eax, dword ptr fs:[0]
// 0059adad  50                   push eax
// 0059adae  64892500000000       mov dword ptr fs:[0], esp
// 0059adb5  51                   push ecx
// 0059adb6  53                   push ebx
// 0059adb7  55                   push ebp
// 0059adb8  56                   push esi
// 0059adb9  57                   push edi
// 0059adba  68ac638a00           push 0x8a63ac
// 0059adbf  8bf1                 mov esi, ecx
// 0059adc1  6894167b00           push 0x7b1694
// 0059adc6  89742418             mov dword ptr [esp + 0x18], esi
// 0059adca  e891c5feff           call 0x587360
// 0059adcf  8d6e28               lea ebp, [esi + 0x28]
// 0059add2  33ff                 xor edi, edi
// 0059add4  8bcd                 mov ecx, ebp
// 0059add6  897c241c             mov dword ptr [esp + 0x1c], edi
// 0059adda  c70660167b00         mov dword ptr [esi], 0x7b1660
// 0059ade0  e8cb87feff           call 0x5835b0
// 0059ade5  894504               mov dword ptr [ebp + 4], eax
// 0059ade8  bb01000000           mov ebx, 1
// 0059aded  885815               mov byte ptr [eax + 0x15], bl
// 0059adf0  8b4504               mov eax, dword ptr [ebp + 4]
// 0059adf3  894004               mov dword ptr [eax + 4], eax
// 0059adf6  8b4504               mov eax, dword ptr [ebp + 4]
// 0059adf9  8900                 mov dword ptr [eax], eax
// 0059adfb  8b4504               mov eax, dword ptr [ebp + 4]
// 0059adfe  894008               mov dword ptr [eax + 8], eax
// 0059ae01  897d08               mov dword ptr [ebp + 8], edi
// 0059ae04  8d6e34               lea ebp, [esi + 0x34]
// 0059ae07  8bcd                 mov ecx, ebp
// 0059ae09  885c241c             mov byte ptr [esp + 0x1c], bl
// 0059ae0d  e89e87feff           call 0x5835b0
// 0059ae12  894504               mov dword ptr [ebp + 4], eax
// 0059ae15  885815               mov byte ptr [eax + 0x15], bl
// 0059ae18  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae1b  894004               mov dword ptr [eax + 4], eax
// 0059ae1e  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae21  8900                 mov dword ptr [eax], eax
// 0059ae23  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae26  894008               mov dword ptr [eax + 8], eax
// 0059ae29  897d08               mov dword ptr [ebp + 8], edi
// 0059ae2c  897e44               mov dword ptr [esi + 0x44], edi
// 0059ae2f  897e48               mov dword ptr [esi + 0x48], edi
// 0059ae32  897e4c               mov dword ptr [esi + 0x4c], edi
// 0059ae35  8d6e50               lea ebp, [esi + 0x50]
// 0059ae38  8bcd                 mov ecx, ebp
// 0059ae3a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0059ae3f  e84ceafdff           call 0x579890
// 0059ae44  894504               mov dword ptr [ebp + 4], eax
// 0059ae47  88582d               mov byte ptr [eax + 0x2d], bl
// 0059ae4a  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae4d  894004               mov dword ptr [eax + 4], eax
// 0059ae50  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae53  8900                 mov dword ptr [eax], eax
// 0059ae55  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae58  894008               mov dword ptr [eax + 8], eax
// 0059ae5b  897d08               mov dword ptr [ebp + 8], edi
// 0059ae5e  8d6e5c               lea ebp, [esi + 0x5c]
// 0059ae61  8bcd                 mov ecx, ebp
// 0059ae63  c644241c04           mov byte ptr [esp + 0x1c], 4
// 0059ae68  e823eafdff           call 0x579890
// 0059ae6d  894504               mov dword ptr [ebp + 4], eax
// 0059ae70  88582d               mov byte ptr [eax + 0x2d], bl
// 0059ae73  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae76  894004               mov dword ptr [eax + 4], eax
// 0059ae79  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae7c  8900                 mov dword ptr [eax], eax
// 0059ae7e  8b4504               mov eax, dword ptr [ebp + 4]
// 0059ae81  894008               mov dword ptr [eax + 8], eax
// 0059ae84  897d08               mov dword ptr [ebp + 8], edi
// 0059ae87  897e6c               mov dword ptr [esi + 0x6c], edi
// 0059ae8a  897e70               mov dword ptr [esi + 0x70], edi
// 0059ae8d  897e74               mov dword ptr [esi + 0x74], edi
// 0059ae90  897e7c               mov dword ptr [esi + 0x7c], edi
// 0059ae93  89be80000000         mov dword ptr [esi + 0x80], edi
// 0059ae99  89be84000000         mov dword ptr [esi + 0x84], edi
// 0059ae9f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 0059aea5  89be90000000         mov dword ptr [esi + 0x90], edi
// 0059aeab  89be94000000         mov dword ptr [esi + 0x94], edi
// 0059aeb1  688c167b00           push 0x7b168c
// 0059aeb6  57                   push edi
// 0059aeb7  8bce                 mov ecx, esi
// 0059aeb9  c644242408           mov byte ptr [esp + 0x24], 8
// 0059aebe  e89d810400           call 0x5e3060
// 0059aec3  6884167b00           push 0x7b1684
// 0059aec8  6a02                 push 2
// 0059aeca  8bce                 mov ecx, esi
// 0059aecc  e88f810400           call 0x5e3060
// 0059aed1  687c167b00           push 0x7b167c
// 0059aed6  53                   push ebx
// 0059aed7  8bce                 mov ecx, esi
// 0059aed9  e882810400           call 0x5e3060
// 0059aede  6874167b00           push 0x7b1674
// 0059aee3  6a03                 push 3
// 0059aee5  8bce                 mov ecx, esi
// 0059aee7  e874810400           call 0x5e3060
// 0059aeec  686c167b00           push 0x7b166c
// 0059aef1  6a04                 push 4
// 0059aef3  8bce                 mov ecx, esi
// 0059aef5  e866810400           call 0x5e3060
// 0059aefa  6864167b00           push 0x7b1664
// 0059aeff  6a05                 push 5
// 0059af01  8bce                 mov ecx, esi
// 0059af03  e858810400           call 0x5e3060
// 0059af08  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059af0c  5f                   pop edi
// 0059af0d  8bc6                 mov eax, esi
// 0059af0f  5e                   pop esi
// 0059af10  5d                   pop ebp
// 0059af11  5b                   pop ebx
// 0059af12  64890d00000000       mov dword ptr fs:[0], ecx
// 0059af19  83c410               add esp, 0x10
// 0059af1c  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??0?$EnumDesc@W4CameraType@Camera@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
