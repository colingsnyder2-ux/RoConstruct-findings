// roc 2009-12 00603fe0  unit: seg_00600000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603fe0
//
// 00603fe0  56                   push esi
// 00603fe1  8b742408             mov esi, dword ptr [esp + 8]
// 00603fe5  8b4614               mov eax, dword ptr [esi + 0x14]
// 00603fe8  3dc8000000           cmp eax, 0xc8
// 00603fed  7422                 je 0x604011
// 00603fef  3dc9000000           cmp eax, 0xc9
// 00603ff4  741b                 je 0x604011
// 00603ff6  8b06                 mov eax, dword ptr [esi]
// 00603ff8  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00603fff  8b0e                 mov ecx, dword ptr [esi]
// 00604001  8b5614               mov edx, dword ptr [esi + 0x14]
// 00604004  895118               mov dword ptr [ecx + 0x18], edx
// 00604007  8b06                 mov eax, dword ptr [esi]
// 00604009  8b08                 mov ecx, dword ptr [eax]
// 0060400b  56                   push esi
// 0060400c  ffd1                 call ecx
// 0060400e  83c404               add esp, 4
// 00604011  56                   push esi
// 00604012  e829feffff           call 0x603e40
// 00604017  8bc8                 mov ecx, eax
// 00604019  83c404               add esp, 4
// 0060401c  83e901               sub ecx, 1
// 0060401f  742e                 je 0x60404f
// 00604021  83e901               sub ecx, 1
// 00604024  752e                 jne 0x604054
// 00604026  384c240c             cmp byte ptr [esp + 0xc], cl
// 0060402a  7413                 je 0x60403f
// 0060402c  8b16                 mov edx, dword ptr [esi]
// 0060402e  c7421433000000       mov dword ptr [edx + 0x14], 0x33
// 00604035  8b06                 mov eax, dword ptr [esi]
// 00604037  8b08                 mov ecx, dword ptr [eax]
// 00604039  56                   push esi
// 0060403a  ffd1                 call ecx
// 0060403c  83c404               add esp, 4
// 0060403f  56                   push esi
// 00604040  e8abcdffff           call 0x600df0
// 00604045  83c404               add esp, 4
// 00604048  b802000000           mov eax, 2
// 0060404d  5e                   pop esi
// 0060404e  c3                   ret 
// 0060404f  b801000000           mov eax, 1
// 00604054  5e                   pop esi
// 00604055  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_read_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
