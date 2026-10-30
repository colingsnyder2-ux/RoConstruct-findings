// roc 2010-06 008a66f0  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a66f0
//
// 008a66f0  6aff                 push -1
// 008a66f2  6835ca9b00           push 0x9bca35
// 008a66f7  64a100000000         mov eax, dword ptr fs:[0]
// 008a66fd  50                   push eax
// 008a66fe  83ec3c               sub esp, 0x3c
// 008a6701  53                   push ebx
// 008a6702  55                   push ebp
// 008a6703  56                   push esi
// 008a6704  57                   push edi
// 008a6705  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a670a  33c4                 xor eax, esp
// 008a670c  50                   push eax
// 008a670d  8d442450             lea eax, [esp + 0x50]
// 008a6711  64a300000000         mov dword ptr fs:[0], eax
// 008a6717  8bf1                 mov esi, ecx
// 008a6719  e86239f0ff           call 0x7aa080
// 008a671e  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008a6722  8bf8                 mov edi, eax
// 008a6724  8d87f8000000         lea eax, [edi + 0xf8]
// 008a672a  50                   push eax
// 008a672b  55                   push ebp
// 008a672c  8d4c2448             lea ecx, [esp + 0x48]
// 008a6730  e86b8ff5ff           call 0x7ff6a0
// 008a6735  8b17                 mov edx, dword ptr [edi]
// 008a6737  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008a673a  56                   push esi
// 008a673b  8bcf                 mov ecx, edi
// 008a673d  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008a6745  ffd0                 call eax
// 008a6747  8b5500               mov edx, dword ptr [ebp]
// 008a674a  50                   push eax
// 008a674b  8b4238               mov eax, dword ptr [edx + 0x38]
// 008a674e  8bcd                 mov ecx, ebp
// 008a6750  ffd0                 call eax
// 008a6752  6a01                 push 1
// 008a6754  8bcd                 mov ecx, ebp
// 008a6756  e859660d00           call 0x97cdb4
// 008a675b  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008a6761  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008a6767  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 008a676d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008a6773  8954243c             mov dword ptr [esp + 0x3c], edx
// 008a6777  83c2fb               add edx, -5
// 008a677a  89542460             mov dword ptr [esp + 0x60], edx
// 008a677e  83c004               add eax, 4
// 008a6781  89442424             mov dword ptr [esp + 0x24], eax
// 008a6785  8b442460             mov eax, dword ptr [esp + 0x60]
// 008a6789  8d5307               lea edx, [ebx + 7]
// 008a678c  89542420             mov dword ptr [esp + 0x20], edx
// 008a6790  8b16                 mov edx, dword ptr [esi]
// 008a6792  8b5258               mov edx, dword ptr [edx + 0x58]
// 008a6795  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a6799  8d442418             lea eax, [esp + 0x18]
// 008a679d  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a67a1  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a67a5  50                   push eax
// 008a67a6  8bce                 mov ecx, esi
// 008a67a8  ffd2                 call edx
// 008a67aa  8bf0                 mov esi, eax
// 008a67ac  8b4500               mov eax, dword ptr [ebp]
// 008a67af  6a20                 push 0x20
// 008a67b1  8d4c2424             lea ecx, [esp + 0x24]
// 008a67b5  51                   push ecx
// 008a67b6  8bce                 mov ecx, esi
// 008a67b8  c644246001           mov byte ptr [esp + 0x60], 1
// 008a67bd  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a67c1  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008a67c7  50                   push eax
// 008a67c8  8bce                 mov ecx, esi
// 008a67ca  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008a67d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a67d4  50                   push eax
// 008a67d5  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a67d8  8bcd                 mov ecx, ebp
// 008a67da  ffd0                 call eax
// 008a67dc  8d4c2418             lea ecx, [esp + 0x18]
// 008a67e0  c644245800           mov byte ptr [esp + 0x58], 0
// 008a67e5  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008a67eb  51                   push ecx
// 008a67ec  8bcc                 mov ecx, esp
// 008a67ee  89642418             mov dword ptr [esp + 0x18], esp
// 008a67f2  68483ba700           push 0xa73b48
// 008a67f7  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008a67fd  51                   push ecx
// 008a67fe  8bcc                 mov ecx, esp
// 008a6800  89642424             mov dword ptr [esp + 0x24], esp
// 008a6804  684458a600           push 0xa65844
// 008a6809  c644246402           mov byte ptr [esp + 0x64], 2
// 008a680e  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008a6814  8bcf                 mov ecx, edi
// 008a6816  c644246003           mov byte ptr [esp + 0x60], 3
// 008a681b  e8d0b9f8ff           call 0x8321f0
// 008a6820  8bc8                 mov ecx, eax
// 008a6822  c644246000           mov byte ptr [esp + 0x60], 0
// 008a6827  e844ebfeff           call 0x895370
// 008a682c  8b742438             mov esi, dword ptr [esp + 0x38]
// 008a6830  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a6834  50                   push eax
// 008a6835  56                   push esi
// 008a6836  83c1fa               add ecx, -6
// 008a6839  51                   push ecx
// 008a683a  53                   push ebx
// 008a683b  55                   push ebp
// 008a683c  8bcf                 mov ecx, edi
// 008a683e  e8fd6af0ff           call 0x7ad340
// 008a6843  51                   push ecx
// 008a6844  8bcc                 mov ecx, esp
// 008a6846  89642420             mov dword ptr [esp + 0x20], esp
// 008a684a  682c3ba700           push 0xa73b2c
// 008a684f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008a6855  51                   push ecx
// 008a6856  8bcc                 mov ecx, esp
// 008a6858  8964241c             mov dword ptr [esp + 0x1c], esp
// 008a685c  684458a600           push 0xa65844
// 008a6861  c644246404           mov byte ptr [esp + 0x64], 4
// 008a6866  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008a686c  8bcf                 mov ecx, edi
// 008a686e  c644246005           mov byte ptr [esp + 0x60], 5
// 008a6873  e878b9f8ff           call 0x8321f0
// 008a6878  8bc8                 mov ecx, eax
// 008a687a  c644246000           mov byte ptr [esp + 0x60], 0
// 008a687f  e8eceafeff           call 0x895370
// 008a6884  8b542460             mov edx, dword ptr [esp + 0x60]
// 008a6888  50                   push eax
// 008a6889  56                   push esi
// 008a688a  52                   push edx
// 008a688b  53                   push ebx
// 008a688c  55                   push ebp
// 008a688d  8bcf                 mov ecx, edi
// 008a688f  e8ac6af0ff           call 0x7ad340
// 008a6894  8d4c2440             lea ecx, [esp + 0x40]
// 008a6898  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008a68a0  e87b8ef5ff           call 0x7ff720
// 008a68a5  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008a68a9  64890d00000000       mov dword ptr fs:[0], ecx
// 008a68b0  59                   pop ecx
// 008a68b1  5f                   pop edi
// 008a68b2  5e                   pop esi
// 008a68b3  5d                   pop ebp
// 008a68b4  5b                   pop ebx
// 008a68b5  83c448               add esp, 0x48
// 008a68b8  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarListCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonSystemButton.cpp