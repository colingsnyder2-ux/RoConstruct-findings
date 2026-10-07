// roc 2008-06 0040af30  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040af30
//
// 0040af30  8b442440             mov eax, dword ptr [esp + 0x40]
// 0040af34  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0040af38  83ec1c               sub esp, 0x1c
// 0040af3b  53                   push ebx
// 0040af3c  55                   push ebp
// 0040af3d  56                   push esi
// 0040af3e  57                   push edi
// 0040af3f  50                   push eax
// 0040af40  83ec1c               sub esp, 0x1c
// 0040af43  8bc4                 mov eax, esp
// 0040af45  8908                 mov dword ptr [eax], ecx
// 0040af47  8b542474             mov edx, dword ptr [esp + 0x74]
// 0040af4b  895004               mov dword ptr [eax + 4], edx
// 0040af4e  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0040af52  894808               mov dword ptr [eax + 8], ecx
// 0040af55  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0040af59  89500c               mov dword ptr [eax + 0xc], edx
// 0040af5c  33db                 xor ebx, ebx
// 0040af5e  895810               mov dword ptr [eax + 0x10], ebx
// 0040af61  895814               mov dword ptr [eax + 0x14], ebx
// 0040af64  8a8c2488000000       mov cl, byte ptr [esp + 0x88]
// 0040af6b  884818               mov byte ptr [eax + 0x18], cl
// 0040af6e  389c2488000000       cmp byte ptr [esp + 0x88], bl
// 0040af75  7414                 je 0x40af8b
// 0040af77  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0040af7e  895010               mov dword ptr [eax + 0x10], edx
// 0040af81  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0040af88  894814               mov dword ptr [eax + 0x14], ecx
// 0040af8b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0040af8f  83ec1c               sub esp, 0x1c
// 0040af92  8bc4                 mov eax, esp
// 0040af94  8910                 mov dword ptr [eax], edx
// 0040af96  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0040af9a  894804               mov dword ptr [eax + 4], ecx
// 0040af9d  8b542478             mov edx, dword ptr [esp + 0x78]
// 0040afa1  895008               mov dword ptr [eax + 8], edx
// 0040afa4  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0040afa8  89480c               mov dword ptr [eax + 0xc], ecx
// 0040afab  895810               mov dword ptr [eax + 0x10], ebx
// 0040afae  895814               mov dword ptr [eax + 0x14], ebx
// 0040afb1  8a942488000000       mov dl, byte ptr [esp + 0x88]
// 0040afb8  885018               mov byte ptr [eax + 0x18], dl
// 0040afbb  389c2488000000       cmp byte ptr [esp + 0x88], bl
// 0040afc2  7414                 je 0x40afd8
// 0040afc4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0040afcb  894810               mov dword ptr [eax + 0x10], ecx
// 0040afce  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0040afd5  895014               mov dword ptr [eax + 0x14], edx
// 0040afd8  8d44244c             lea eax, [esp + 0x4c]
// 0040afdc  50                   push eax
// 0040afdd  e84efcffff           call 0x40ac30
// 0040afe2  8a4818               mov cl, byte ptr [eax + 0x18]
// 0040afe5  888c248c000000       mov byte ptr [esp + 0x8c], cl
// 0040afec  8b10                 mov edx, dword ptr [eax]
// 0040afee  89542474             mov dword ptr [esp + 0x74], edx
// 0040aff2  8b7004               mov esi, dword ptr [eax + 4]
// 0040aff5  89742478             mov dword ptr [esp + 0x78], esi
// 0040aff9  8b7808               mov edi, dword ptr [eax + 8]
// 0040affc  897c247c             mov dword ptr [esp + 0x7c], edi
// 0040b000  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0040b003  83c440               add esp, 0x40
// 0040b006  896c2440             mov dword ptr [esp + 0x40], ebp
// 0040b00a  3acb                 cmp cl, bl
// 0040b00c  7410                 je 0x40b01e
// 0040b00e  8b5810               mov ebx, dword ptr [eax + 0x10]
// 0040b011  895c2444             mov dword ptr [esp + 0x44], ebx
// 0040b015  8b4014               mov eax, dword ptr [eax + 0x14]
// 0040b018  89442448             mov dword ptr [esp + 0x48], eax
// 0040b01c  33db                 xor ebx, ebx
// 0040b01e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0040b022  8910                 mov dword ptr [eax], edx
// 0040b024  897004               mov dword ptr [eax + 4], esi
// 0040b027  897808               mov dword ptr [eax + 8], edi
// 0040b02a  89680c               mov dword ptr [eax + 0xc], ebp
// 0040b02d  895810               mov dword ptr [eax + 0x10], ebx
// 0040b030  895814               mov dword ptr [eax + 0x14], ebx
// 0040b033  884818               mov byte ptr [eax + 0x18], cl
// 0040b036  3acb                 cmp cl, bl
// 0040b038  740e                 je 0x40b048
// 0040b03a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0040b03e  8b542448             mov edx, dword ptr [esp + 0x48]
// 0040b042  894810               mov dword ptr [eax + 0x10], ecx
// 0040b045  895014               mov dword ptr [eax + 0x14], edx
// 0040b048  5f                   pop edi
// 0040b049  5e                   pop esi
// 0040b04a  5d                   pop ebp
// 0040b04b  5b                   pop ebx
// 0040b04c  83c41c               add esp, 0x1c
// 0040b04f  c3                   ret 
// library rbxgs/humanoid\FallingDown.cpp (function ??$find_if@Vnamed_slot_map_iterator@detail@signals@boost@@Uis_callable@234@@std@@YA?AVnamed_slot_map_iterator@detail@signals@boost@@V1234@0Uis_callable@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/FallingDown.cpp
