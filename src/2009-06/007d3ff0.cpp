// roc 2009-06 007d3ff0  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3ff0
//
// 007d3ff0  56                   push esi
// 007d3ff1  8bf1                 mov esi, ecx
// 007d3ff3  85f6                 test esi, esi
// 007d3ff5  0f8481000000         je 0x7d407c
// 007d3ffb  837e2000             cmp dword ptr [esi + 0x20], 0
// 007d3fff  747b                 je 0x7d407c
// 007d4001  53                   push ebx
// 007d4002  8d9ef8000000         lea ebx, [esi + 0xf8]
// 007d4008  57                   push edi
// 007d4009  8bcb                 mov ecx, ebx
// 007d400b  e8f01c0000           call 0x7d5d00
// 007d4010  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 007d4016  85ff                 test edi, edi
// 007d4018  7460                 je 0x7d407a
// 007d401a  8bcb                 mov ecx, ebx
// 007d401c  e8df1c0000           call 0x7d5d00
// 007d4021  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 007d4027  81fbff000000         cmp ebx, 0xff
// 007d402d  7514                 jne 0x7d4043
// 007d402f  6a00                 push 0
// 007d4031  6a00                 push 0
// 007d4033  6800000800           push 0x80000
// 007d4038  8bce                 mov ecx, esi
// 007d403a  e8994ff4ff           call 0x718fd8
// 007d403f  5f                   pop edi
// 007d4040  5b                   pop ebx
// 007d4041  5e                   pop esi
// 007d4042  c3                   ret 
// 007d4043  83bef000000000       cmp dword ptr [esi + 0xf0], 0
// 007d404a  751f                 jne 0x7d406b
// 007d404c  6a00                 push 0
// 007d404e  6800000800           push 0x80000
// 007d4053  6a00                 push 0
// 007d4055  8bce                 mov ecx, esi
// 007d4057  e87c4ff4ff           call 0x718fd8
// 007d405c  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d405f  6a02                 push 2
// 007d4061  53                   push ebx
// 007d4062  6a00                 push 0
// 007d4064  50                   push eax
// 007d4065  ffd7                 call edi
// 007d4067  5f                   pop edi
// 007d4068  5b                   pop ebx
// 007d4069  5e                   pop esi
// 007d406a  c3                   ret 
// 007d406b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d406e  6a02                 push 2
// 007d4070  68ff000000           push 0xff
// 007d4075  6a00                 push 0
// 007d4077  51                   push ecx
// 007d4078  ffd7                 call edi
// 007d407a  5f                   pop edi
// 007d407b  5b                   pop ebx
// 007d407c  5e                   pop esi
// 007d407d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
