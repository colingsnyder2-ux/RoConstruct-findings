// roc 2009-12 008e77a0  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e77a0
//
// 008e77a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 008e77a4  53                   push ebx
// 008e77a5  55                   push ebp
// 008e77a6  56                   push esi
// 008e77a7  57                   push edi
// 008e77a8  8b7860               mov edi, dword ptr [eax + 0x60]
// 008e77ab  8bf1                 mov esi, ecx
// 008e77ad  394704               cmp dword ptr [edi + 4], eax
// 008e77b0  0f84ad000000         je 0x8e7863
// 008e77b6  8b07                 mov eax, dword ptr [edi]
// 008e77b8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008e77bb  8bcf                 mov ecx, edi
// 008e77bd  ffd2                 call edx
// 008e77bf  83f802               cmp eax, 2
// 008e77c2  740d                 je 0x8e77d1
// 008e77c4  8b07                 mov eax, dword ptr [edi]
// 008e77c6  8b5048               mov edx, dword ptr [eax + 0x48]
// 008e77c9  8bcf                 mov ecx, edi
// 008e77cb  ffd2                 call edx
// 008e77cd  85c0                 test eax, eax
// 008e77cf  7549                 jne 0x8e781a
// 008e77d1  e8fa81f4ff           call 0x82f9d0
// 008e77d6  6a14                 push 0x14
// 008e77d8  8bc8                 mov ecx, eax
// 008e77da  e82179f4ff           call 0x82f100
// 008e77df  8bf0                 mov esi, eax
// 008e77e1  e8ea81f4ff           call 0x82f9d0
// 008e77e6  6a10                 push 0x10
// 008e77e8  8bc8                 mov ecx, eax
// 008e77ea  e81179f4ff           call 0x82f100
// 008e77ef  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e77f3  8b542420             mov edx, dword ptr [esp + 0x20]
// 008e77f7  56                   push esi
// 008e77f8  50                   push eax
// 008e77f9  8b442424             mov eax, dword ptr [esp + 0x24]
// 008e77fd  2bc8                 sub ecx, eax
// 008e77ff  83e904               sub ecx, 4
// 008e7802  51                   push ecx
// 008e7803  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e7807  6a02                 push 2
// 008e7809  83c002               add eax, 2
// 008e780c  50                   push eax
// 008e780d  52                   push edx
// 008e780e  e869f40300           call 0x926c7c
// 008e7813  5f                   pop edi
// 008e7814  5e                   pop esi
// 008e7815  5d                   pop ebp
// 008e7816  5b                   pop ebx
// 008e7817  c21800               ret 0x18
// 008e781a  e8b181f4ff           call 0x82f9d0
// 008e781f  6a14                 push 0x14
// 008e7821  8bc8                 mov ecx, eax
// 008e7823  e8d878f4ff           call 0x82f100
// 008e7828  8bf0                 mov esi, eax
// 008e782a  e8a181f4ff           call 0x82f9d0
// 008e782f  6a10                 push 0x10
// 008e7831  8bc8                 mov ecx, eax
// 008e7833  e8c878f4ff           call 0x82f100
// 008e7838  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e783c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e7840  56                   push esi
// 008e7841  50                   push eax
// 008e7842  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e7846  2bc8                 sub ecx, eax
// 008e7848  6a02                 push 2
// 008e784a  83e904               sub ecx, 4
// 008e784d  51                   push ecx
// 008e784e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008e7852  52                   push edx
// 008e7853  83c002               add eax, 2
// 008e7856  50                   push eax
// 008e7857  e820f40300           call 0x926c7c
// 008e785c  5f                   pop edi
// 008e785d  5e                   pop esi
// 008e785e  5d                   pop ebp
// 008e785f  5b                   pop ebx
// 008e7860  c21800               ret 0x18
// 008e7863  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 008e7869  83793400             cmp dword ptr [ecx + 0x34], 0
// 008e786d  741d                 je 0x8e788c
// 008e786f  8b16                 mov edx, dword ptr [esi]
// 008e7871  50                   push eax
// 008e7872  8b4224               mov eax, dword ptr [edx + 0x24]
// 008e7875  8bce                 mov ecx, esi
// 008e7877  ffd0                 call eax
// 008e7879  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008e787d  50                   push eax
// 008e787e  8d4c241c             lea ecx, [esp + 0x1c]
// 008e7882  51                   push ecx
// 008e7883  8bcf                 mov ecx, edi
// 008e7885  e874cdf0ff           call 0x7f45fe
// 008e788a  eb5e                 jmp 0x8e78ea
// 008e788c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008e7892  83f8ff               cmp eax, -1
// 008e7895  7508                 jne 0x8e789f
// 008e7897  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 008e789d  eb02                 jmp 0x8e78a1
// 008e789f  8be8                 mov ebp, eax
// 008e78a1  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 008e78a7  83fbff               cmp ebx, -1
// 008e78aa  7506                 jne 0x8e78b2
// 008e78ac  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 008e78b2  8b17                 mov edx, dword ptr [edi]
// 008e78b4  8b4248               mov eax, dword ptr [edx + 0x48]
// 008e78b7  8bcf                 mov ecx, edi
// 008e78b9  ffd0                 call eax
// 008e78bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e78bf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008e78c3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008e78c7  50                   push eax
// 008e78c8  55                   push ebp
// 008e78c9  53                   push ebx
// 008e78ca  83ec10               sub esp, 0x10
// 008e78cd  8bc4                 mov eax, esp
// 008e78cf  8908                 mov dword ptr [eax], ecx
// 008e78d1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e78d5  895004               mov dword ptr [eax + 4], edx
// 008e78d8  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e78dc  894808               mov dword ptr [eax + 8], ecx
// 008e78df  57                   push edi
// 008e78e0  8bce                 mov ecx, esi
// 008e78e2  89500c               mov dword ptr [eax + 0xc], edx
// 008e78e5  e886fbffff           call 0x8e7470
// 008e78ea  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 008e78f0  83f8ff               cmp eax, -1
// 008e78f3  7508                 jne 0x8e78fd
// 008e78f5  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 008e78fb  eb02                 jmp 0x8e78ff
// 008e78fd  8bc8                 mov ecx, eax
// 008e78ff  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 008e7905  83f8ff               cmp eax, -1
// 008e7908  7506                 jne 0x8e7910
// 008e790a  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 008e7910  51                   push ecx
// 008e7911  50                   push eax
// 008e7912  8d442420             lea eax, [esp + 0x20]
// 008e7916  50                   push eax
// 008e7917  8bcf                 mov ecx, edi
// 008e7919  e8daccf0ff           call 0x7f45f8
// 008e791e  5f                   pop edi
// 008e791f  5e                   pop esi
// 008e7920  5d                   pop ebp
// 008e7921  5b                   pop ebx
// 008e7922  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
