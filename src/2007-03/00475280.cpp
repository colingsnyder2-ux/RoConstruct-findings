// roc 2007-03 00475280  unit: seg_00470000  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475280
//
// 00475280  d901                 fld dword ptr [ecx]
// 00475282  53                   push ebx
// 00475283  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00475287  d903                 fld dword ptr [ebx]
// 00475289  dae9                 fucompp 
// 0047528b  dfe0                 fnstsw ax
// 0047528d  f6c444               test ah, 0x44
// 00475290  0f8af8000000         jp 0x47538e
// 00475296  d94104               fld dword ptr [ecx + 4]
// 00475299  d94304               fld dword ptr [ebx + 4]
// 0047529c  dae9                 fucompp 
// 0047529e  dfe0                 fnstsw ax
// 004752a0  f6c444               test ah, 0x44
// 004752a3  0f8ae5000000         jp 0x47538e
// 004752a9  d94108               fld dword ptr [ecx + 8]
// 004752ac  d94308               fld dword ptr [ebx + 8]
// 004752af  dae9                 fucompp 
// 004752b1  dfe0                 fnstsw ax
// 004752b3  f6c444               test ah, 0x44
// 004752b6  0f8ad2000000         jp 0x47538e
// 004752bc  d9410c               fld dword ptr [ecx + 0xc]
// 004752bf  d9430c               fld dword ptr [ebx + 0xc]
// 004752c2  dae9                 fucompp 
// 004752c4  dfe0                 fnstsw ax
// 004752c6  f6c444               test ah, 0x44
// 004752c9  0f8abf000000         jp 0x47538e
// 004752cf  8b4110               mov eax, dword ptr [ecx + 0x10]
// 004752d2  3b4310               cmp eax, dword ptr [ebx + 0x10]
// 004752d5  0f85b3000000         jne 0x47538e
// 004752db  55                   push ebp
// 004752dc  56                   push esi
// 004752dd  57                   push edi
// 004752de  b840000000           mov eax, 0x40
// 004752e3  8d5314               lea edx, [ebx + 0x14]
// 004752e6  8d7114               lea esi, [ecx + 0x14]
// 004752e9  8da42400000000       lea esp, [esp]
// 004752f0  8b3e                 mov edi, dword ptr [esi]
// 004752f2  3b3a                 cmp edi, dword ptr [edx]
// 004752f4  7512                 jne 0x475308
// 004752f6  83e804               sub eax, 4
// 004752f9  83c204               add edx, 4
// 004752fc  83c604               add esi, 4
// 004752ff  83f804               cmp eax, 4
// 00475302  73ec                 jae 0x4752f0
// 00475304  85c0                 test eax, eax
// 00475306  745d                 je 0x475365
// 00475308  0fb62a               movzx ebp, byte ptr [edx]
// 0047530b  0fb63e               movzx edi, byte ptr [esi]
// 0047530e  2bfd                 sub edi, ebp
// 00475310  7545                 jne 0x475357
// 00475312  83e801               sub eax, 1
// 00475315  83c201               add edx, 1
// 00475318  83c601               add esi, 1
// 0047531b  85c0                 test eax, eax
// 0047531d  7446                 je 0x475365
// 0047531f  0fb62a               movzx ebp, byte ptr [edx]
// 00475322  0fb63e               movzx edi, byte ptr [esi]
// 00475325  2bfd                 sub edi, ebp
// 00475327  752e                 jne 0x475357
// 00475329  83e801               sub eax, 1
// 0047532c  83c201               add edx, 1
// 0047532f  83c601               add esi, 1
// 00475332  85c0                 test eax, eax
// 00475334  742f                 je 0x475365
// 00475336  0fb62a               movzx ebp, byte ptr [edx]
// 00475339  0fb63e               movzx edi, byte ptr [esi]
// 0047533c  2bfd                 sub edi, ebp
// 0047533e  7517                 jne 0x475357
// 00475340  83e801               sub eax, 1
// 00475343  83c201               add edx, 1
// 00475346  83c601               add esi, 1
// 00475349  85c0                 test eax, eax
// 0047534b  7418                 je 0x475365
// 0047534d  0fb612               movzx edx, byte ptr [edx]
// 00475350  0fb63e               movzx edi, byte ptr [esi]
// 00475353  2bfa                 sub edi, edx
// 00475355  740e                 je 0x475365
// 00475357  85ff                 test edi, edi
// 00475359  b801000000           mov eax, 1
// 0047535e  7f07                 jg 0x475367
// 00475360  83c8ff               or eax, 0xffffffff
// 00475363  eb02                 jmp 0x475367
// 00475365  33c0                 xor eax, eax
// 00475367  85c0                 test eax, eax
// 00475369  5f                   pop edi
// 0047536a  5e                   pop esi
// 0047536b  5d                   pop ebp
// 0047536c  7520                 jne 0x47538e
// 0047536e  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00475371  3b4354               cmp eax, dword ptr [ebx + 0x54]
// 00475374  7518                 jne 0x47538e
// 00475376  d94158               fld dword ptr [ecx + 0x58]
// 00475379  d94358               fld dword ptr [ebx + 0x58]
// 0047537c  dae9                 fucompp 
// 0047537e  dfe0                 fnstsw ax
// 00475380  f6c444               test ah, 0x44
// 00475383  7a09                 jp 0x47538e
// 00475385  b801000000           mov eax, 1
// 0047538a  5b                   pop ebx
// 0047538b  c20400               ret 4
// 0047538e  33c0                 xor eax, eax
// 00475390  5b                   pop ebx
// 00475391  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??8TextureUnit@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
