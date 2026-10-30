// roc 2010-06 00562170  unit: G3D::_internal::DialogTemplate  size: 894 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00562170
//
// 00562170  53                   push ebx
// 00562171  56                   push esi
// 00562172  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00562176  57                   push edi
// 00562177  33db                 xor ebx, ebx
// 00562179  8da42400000000       lea esp, [esp]
// 00562180  399e7c010000         cmp dword ptr [esi + 0x17c], ebx
// 00562186  751f                 jne 0x5621a7
// 00562188  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0056218e  56                   push esi
// 0056218f  38580c               cmp byte ptr [eax + 0xc], bl
// 00562192  7507                 jne 0x56219b
// 00562194  e837ffffff           call 0x5620d0
// 00562199  eb05                 jmp 0x5621a0
// 0056219b  e810feffff           call 0x561fb0
// 005621a0  83c404               add esp, 4
// 005621a3  84c0                 test al, al
// 005621a5  7430                 je 0x5621d7
// 005621a7  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 005621ad  8d48ff               lea ecx, [eax - 1]
// 005621b0  81f9fd000000         cmp ecx, 0xfd
// 005621b6  0f8789010000         ja 0x562345
// 005621bc  0fb689f0235600       movzx ecx, byte ptr [ecx + 0x5623f0]
// 005621c3  ff248db0235600       jmp dword ptr [ecx*4 + 0x5623b0]
// 005621ca  e8b1ebffff           call 0x560d80
// 005621cf  84c0                 test al, al
// 005621d1  0f858c010000         jne 0x562363
// 005621d7  5f                   pop edi
// 005621d8  5e                   pop esi
// 005621d9  33c0                 xor eax, eax
// 005621db  5b                   pop ebx
// 005621dc  c3                   ret 
// 005621dd  32c9                 xor cl, cl
// 005621df  32c0                 xor al, al
// 005621e1  e84aecffff           call 0x560e30
// 005621e6  84c0                 test al, al
// 005621e8  74ed                 je 0x5621d7
// 005621ea  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005621f0  eb8e                 jmp 0x562180
// 005621f2  32c9                 xor cl, cl
// 005621f4  b001                 mov al, 1
// 005621f6  e835ecffff           call 0x560e30
// 005621fb  84c0                 test al, al
// 005621fd  74d8                 je 0x5621d7
// 005621ff  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562205  e976ffffff           jmp 0x562180
// 0056220a  b101                 mov cl, 1
// 0056220c  32c0                 xor al, al
// 0056220e  e81decffff           call 0x560e30
// 00562213  84c0                 test al, al
// 00562215  74c0                 je 0x5621d7
// 00562217  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0056221d  e95effffff           jmp 0x562180
// 00562222  b101                 mov cl, 1
// 00562224  8ac1                 mov al, cl
// 00562226  e805ecffff           call 0x560e30
// 0056222b  84c0                 test al, al
// 0056222d  74a8                 je 0x5621d7
// 0056222f  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562235  e946ffffff           jmp 0x562180
// 0056223a  8b16                 mov edx, dword ptr [esi]
// 0056223c  c742143c000000       mov dword ptr [edx + 0x14], 0x3c
// 00562243  8b06                 mov eax, dword ptr [esi]
// 00562245  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0056224b  894818               mov dword ptr [eax + 0x18], ecx
// 0056224e  8b16                 mov edx, dword ptr [esi]
// 00562250  8b02                 mov eax, dword ptr [edx]
// 00562252  56                   push esi
// 00562253  ffd0                 call eax
// 00562255  83c404               add esp, 4
// 00562258  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0056225e  e91dffffff           jmp 0x562180
// 00562263  56                   push esi
// 00562264  e897fcffff           call 0x561f00
// 00562269  83c404               add esp, 4
// 0056226c  84c0                 test al, al
// 0056226e  0f8463ffffff         je 0x5621d7
// 00562274  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0056227a  e901ffffff           jmp 0x562180
// 0056227f  56                   push esi
// 00562280  e8abf1ffff           call 0x561430
// 00562285  83c404               add esp, 4
// 00562288  84c0                 test al, al
// 0056228a  0f8447ffffff         je 0x5621d7
// 00562290  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562296  e9e5feffff           jmp 0x562180
// 0056229b  8bfe                 mov edi, esi
// 0056229d  e88ef4ffff           call 0x561730
// 005622a2  84c0                 test al, al
// 005622a4  0f842dffffff         je 0x5621d7
// 005622aa  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005622b0  e9cbfeffff           jmp 0x562180
// 005622b5  56                   push esi
// 005622b6  e8d5f6ffff           call 0x561990
// 005622bb  83c404               add esp, 4
// 005622be  84c0                 test al, al
// 005622c0  0f8411ffffff         je 0x5621d7
// 005622c6  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005622cc  e9affeffff           jmp 0x562180
// 005622d1  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 005622d7  8b94819cfcffff       mov edx, dword ptr [ecx + eax*4 - 0x364]
// 005622de  56                   push esi
// 005622df  ffd2                 call edx
// 005622e1  83c404               add esp, 4
// 005622e4  84c0                 test al, al
// 005622e6  0f84ebfeffff         je 0x5621d7
// 005622ec  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005622f2  e989feffff           jmp 0x562180
// 005622f7  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005622fd  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00562300  56                   push esi
// 00562301  ffd1                 call ecx
// 00562303  83c404               add esp, 4
// 00562306  84c0                 test al, al
// 00562308  0f84c9feffff         je 0x5621d7
// 0056230e  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562314  e967feffff           jmp 0x562180
// 00562319  8b16                 mov edx, dword ptr [esi]
// 0056231b  c742145c000000       mov dword ptr [edx + 0x14], 0x5c
// 00562322  8b06                 mov eax, dword ptr [esi]
// 00562324  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0056232a  894818               mov dword ptr [eax + 0x18], ecx
// 0056232d  8b16                 mov edx, dword ptr [esi]
// 0056232f  8b4204               mov eax, dword ptr [edx + 4]
// 00562332  6a01                 push 1
// 00562334  56                   push esi
// 00562335  ffd0                 call eax
// 00562337  83c408               add esp, 8
// 0056233a  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562340  e93bfeffff           jmp 0x562180
// 00562345  8b0e                 mov ecx, dword ptr [esi]
// 00562347  c7411444000000       mov dword ptr [ecx + 0x14], 0x44
// 0056234e  8b16                 mov edx, dword ptr [esi]
// 00562350  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00562356  894218               mov dword ptr [edx + 0x18], eax
// 00562359  8b0e                 mov ecx, dword ptr [esi]
// 0056235b  8b11                 mov edx, dword ptr [ecx]
// 0056235d  56                   push esi
// 0056235e  ffd2                 call edx
// 00562360  83c404               add esp, 4
// 00562363  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562369  e912feffff           jmp 0x562180
// 0056236e  e8bdedffff           call 0x561130
// 00562373  84c0                 test al, al
// 00562375  0f845cfeffff         je 0x5621d7
// 0056237b  5f                   pop edi
// 0056237c  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562382  5e                   pop esi
// 00562383  b801000000           mov eax, 1
// 00562388  5b                   pop ebx
// 00562389  c3                   ret 
// 0056238a  8b06                 mov eax, dword ptr [esi]
// 0056238c  c7401455000000       mov dword ptr [eax + 0x14], 0x55
// 00562393  8b0e                 mov ecx, dword ptr [esi]
// 00562395  8b5104               mov edx, dword ptr [ecx + 4]
// 00562398  6a01                 push 1
// 0056239a  56                   push esi
// 0056239b  ffd2                 call edx
// 0056239d  83c408               add esp, 8
// 005623a0  5f                   pop edi
// 005623a1  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 005623a7  5e                   pop esi
// 005623a8  b802000000           mov eax, 2
// 005623ad  5b                   pop ebx
// 005623ae  c3                   ret 
// 005623af  90                   nop 
// 005623b0  1923                 sbb dword ptr [ebx], esp
// 005623b2  56                   push esi
// 005623b3  00dd                 add ch, bl
// 005623b5  215600               and dword ptr [esi], edx
// 005623b8  f2215600             and dword ptr [esi], edx
// 005623bc  3a22                 cmp ah, byte ptr [edx]
// 005623be  56                   push esi
// 005623bf  007f22               add byte ptr [edi + 0x22], bh
// 005623c2  56                   push esi
// 005623c3  000a                 add byte ptr [edx], cl
// 005623c5  225600               and dl, byte ptr [esi]
// 005623c8  2222                 and ah, byte ptr [edx]
// 005623ca  56                   push esi
// 005623cb  006322               add byte ptr [ebx + 0x22], ah
// 005623ce  56                   push esi
// 005623cf  00ca                 add dl, cl
// 005623d1  215600               and dword ptr [esi], edx
// 005623d4  8a23                 mov ah, byte ptr [ebx]
// 005623d6  56                   push esi
// 005623d7  006e23               add byte ptr [esi + 0x23], ch
// 005623da  56                   push esi
// 005623db  009b225600b5         add byte ptr [ebx - 0x4affa9de], bl
// 005623e1  225600               and dl, byte ptr [esi]
// 005623e4  d122                 shl dword ptr [edx], 1
// 005623e6  56                   push esi
// 005623e7  00f7                 add bh, dh
// 005623e9  225600               and dl, byte ptr [esi]
// 005623ec  45                   inc ebp
// 005623ed  235600               and edx, dword ptr [esi]
// 005623f0  000f                 add byte ptr [edi], cl
// library jpeg-6b/jdmarker.c (function _read_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
