// roc 2008-06 0052af30  unit: seg_00520000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052af30
//
// 0052af30  53                   push ebx
// 0052af31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0052af35  56                   push esi
// 0052af36  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052af3a  57                   push edi
// 0052af3b  8b7e04               mov edi, dword ptr [esi + 4]
// 0052af3e  83fb01               cmp ebx, 1
// 0052af41  7418                 je 0x52af5b
// 0052af43  8b06                 mov eax, dword ptr [esi]
// 0052af45  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0052af4c  8b0e                 mov ecx, dword ptr [esi]
// 0052af4e  895918               mov dword ptr [ecx + 0x18], ebx
// 0052af51  8b16                 mov edx, dword ptr [esi]
// 0052af53  8b02                 mov eax, dword ptr [edx]
// 0052af55  56                   push esi
// 0052af56  ffd0                 call eax
// 0052af58  83c404               add esp, 4
// 0052af5b  6a78                 push 0x78
// 0052af5d  53                   push ebx
// 0052af5e  56                   push esi
// 0052af5f  e8ecfbffff           call 0x52ab50
// 0052af64  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052af68  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052af6c  894804               mov dword ptr [eax + 4], ecx
// 0052af6f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052af73  895008               mov dword ptr [eax + 8], edx
// 0052af76  8a542424             mov dl, byte ptr [esp + 0x24]
// 0052af7a  c70000000000         mov dword ptr [eax], 0
// 0052af80  89480c               mov dword ptr [eax + 0xc], ecx
// 0052af83  885020               mov byte ptr [eax + 0x20], dl
// 0052af86  c6402200             mov byte ptr [eax + 0x22], 0
// 0052af8a  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0052af8d  83c40c               add esp, 0xc
// 0052af90  894824               mov dword ptr [eax + 0x24], ecx
// 0052af93  894748               mov dword ptr [edi + 0x48], eax
// 0052af96  5f                   pop edi
// 0052af97  5e                   pop esi
// 0052af98  5b                   pop ebx
// 0052af99  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_barray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
