// roc 2009-06 007fbc30  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fbc30
//
// 007fbc30  83ec20               sub esp, 0x20
// 007fbc33  53                   push ebx
// 007fbc34  55                   push ebp
// 007fbc35  56                   push esi
// 007fbc36  57                   push edi
// 007fbc37  6860069000           push 0x900660
// 007fbc3c  e8bfb00000           call 0x806d00
// 007fbc41  8bc8                 mov ecx, eax
// 007fbc43  e8d8af0000           call 0x806c20
// 007fbc48  8b742438             mov esi, dword ptr [esp + 0x38]
// 007fbc4c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fbc4f  33ff                 xor edi, edi
// 007fbc51  8bd8                 mov ebx, eax
// 007fbc53  8d6f05               lea ebp, [edi + 5]
// 007fbc56  397104               cmp dword ptr [ecx + 4], esi
// 007fbc59  750f                 jne 0x7fbc6a
// 007fbc5b  8b01                 mov eax, dword ptr [ecx]
// 007fbc5d  8b5078               mov edx, dword ptr [eax + 0x78]
// 007fbc60  ffd2                 call edx
// 007fbc62  85c0                 test eax, eax
// 007fbc64  7404                 je 0x7fbc6a
// 007fbc66  8bfd                 mov edi, ebp
// 007fbc68  eb37                 jmp 0x7fbca1
// 007fbc6a  8b4660               mov eax, dword ptr [esi + 0x60]
// 007fbc6d  8b4804               mov ecx, dword ptr [eax + 4]
// 007fbc70  3bce                 cmp ecx, esi
// 007fbc72  7517                 jne 0x7fbc8b
// 007fbc74  397008               cmp dword ptr [eax + 8], esi
// 007fbc77  7507                 jne 0x7fbc80
// 007fbc79  bf04000000           mov edi, 4
// 007fbc7e  eb21                 jmp 0x7fbca1
// 007fbc80  3bce                 cmp ecx, esi
// 007fbc82  7507                 jne 0x7fbc8b
// 007fbc84  bf03000000           mov edi, 3
// 007fbc89  eb16                 jmp 0x7fbca1
// 007fbc8b  39700c               cmp dword ptr [eax + 0xc], esi
// 007fbc8e  7507                 jne 0x7fbc97
// 007fbc90  bf02000000           mov edi, 2
// 007fbc95  eb0a                 jmp 0x7fbca1
// 007fbc97  397008               cmp dword ptr [eax + 8], esi
// 007fbc9a  7505                 jne 0x7fbca1
// 007fbc9c  bf01000000           mov edi, 1
// 007fbca1  85db                 test ebx, ebx
// 007fbca3  7455                 je 0x7fbcfa
// 007fbca5  6a06                 push 6
// 007fbca7  57                   push edi
// 007fbca8  8d442428             lea eax, [esp + 0x28]
// 007fbcac  50                   push eax
// 007fbcad  8bcb                 mov ecx, ebx
// 007fbcaf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007fbcb3  896c2420             mov dword ptr [esp + 0x20], ebp
// 007fbcb7  896c2424             mov dword ptr [esp + 0x24], ebp
// 007fbcbb  896c2428             mov dword ptr [esp + 0x28], ebp
// 007fbcbf  e8fca00000           call 0x805dc0
// 007fbcc4  8b10                 mov edx, dword ptr [eax]
// 007fbcc6  68ff00ff00           push 0xff00ff
// 007fbccb  8d4c2414             lea ecx, [esp + 0x14]
// 007fbccf  51                   push ecx
// 007fbcd0  83ec10               sub esp, 0x10
// 007fbcd3  8bcc                 mov ecx, esp
// 007fbcd5  8911                 mov dword ptr [ecx], edx
// 007fbcd7  8b5004               mov edx, dword ptr [eax + 4]
// 007fbcda  895104               mov dword ptr [ecx + 4], edx
// 007fbcdd  8b5008               mov edx, dword ptr [eax + 8]
// 007fbce0  8b400c               mov eax, dword ptr [eax + 0xc]
// 007fbce3  895108               mov dword ptr [ecx + 8], edx
// 007fbce6  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007fbcea  89410c               mov dword ptr [ecx + 0xc], eax
// 007fbced  8d4c2454             lea ecx, [esp + 0x54]
// 007fbcf1  51                   push ecx
// 007fbcf2  52                   push edx
// 007fbcf3  8bcb                 mov ecx, ebx
// 007fbcf5  e806a60000           call 0x806300
// 007fbcfa  5f                   pop edi
// 007fbcfb  5e                   pop esi
// 007fbcfc  5d                   pop ebp
// 007fbcfd  5b                   pop ebx
// 007fbcfe  83c420               add esp, 0x20
// 007fbd01  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawButtonBackground@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@AAEXPAVCDC@@PAVCXTPTabManagerItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
