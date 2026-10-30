// from server: 100% by auto
// roc 2008-06 0052aec0  unit: seg_00520000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052aec0
//
// 0052aec0  53                   push ebx
// 0052aec1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0052aec5  56                   push esi
// 0052aec6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052aeca  57                   push edi
// 0052aecb  8b7e04               mov edi, dword ptr [esi + 4]
// 0052aece  83fb01               cmp ebx, 1
// 0052aed1  7418                 je 0x52aeeb
// 0052aed3  8b06                 mov eax, dword ptr [esi]
// 0052aed5  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 0052aedc  8b0e                 mov ecx, dword ptr [esi]
// 0052aede  895918               mov dword ptr [ecx + 0x18], ebx
// 0052aee1  8b16                 mov edx, dword ptr [esi]
// 0052aee3  8b02                 mov eax, dword ptr [edx]
// 0052aee5  56                   push esi
// 0052aee6  ffd0                 call eax
// 0052aee8  83c404               add esp, 4
// 0052aeeb  6a78                 push 0x78
// 0052aeed  53                   push ebx
// 0052aeee  56                   push esi
// 0052aeef  e85cfcffff           call 0x52ab50
// 0052aef4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052aef8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052aefc  894804               mov dword ptr [eax + 4], ecx
// 0052aeff  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052af03  895008               mov dword ptr [eax + 8], edx
// 0052af06  8a542424             mov dl, byte ptr [esp + 0x24]
// 0052af0a  c70000000000         mov dword ptr [eax], 0
// 0052af10  89480c               mov dword ptr [eax + 0xc], ecx
// 0052af13  885020               mov byte ptr [eax + 0x20], dl
// 0052af16  c6402200             mov byte ptr [eax + 0x22], 0
// 0052af1a  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0052af1d  83c40c               add esp, 0xc
// 0052af20  894824               mov dword ptr [eax + 0x24], ecx
// 0052af23  894744               mov dword ptr [edi + 0x44], eax
// 0052af26  5f                   pop edi
// 0052af27  5e                   pop esi
// 0052af28  5b                   pop ebx
// 0052af29  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _request_virt_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
