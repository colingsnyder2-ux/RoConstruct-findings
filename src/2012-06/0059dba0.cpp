// roc 2012-06 0059dba0  unit: VAuthoringSettings::?$FactoryProduct  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059dba0
//
// 0059dba0  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059dba4  8b542404             mov edx, dword ptr [esp + 4]
// 0059dba8  56                   push esi
// 0059dba9  57                   push edi
// 0059dbaa  8bf1                 mov esi, ecx
// 0059dbac  50                   push eax
// 0059dbad  8d4c2424             lea ecx, [esp + 0x24]
// 0059dbb1  51                   push ecx
// 0059dbb2  52                   push edx
// 0059dbb3  8bce                 mov ecx, esi
// 0059dbb5  e826deffff           call 0x59b9e0
// 0059dbba  807c242000           cmp byte ptr [esp + 0x20], 0
// 0059dbbf  8bf8                 mov edi, eax
// 0059dbc1  7408                 je 0x59dbcb
// 0059dbc3  5f                   pop edi
// 0059dbc4  83c8ff               or eax, 0xffffffff
// 0059dbc7  5e                   pop esi
// 0059dbc8  c21800               ret 0x18
// 0059dbcb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059dbcf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059dbd3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059dbd7  50                   push eax
// 0059dbd8  51                   push ecx
// 0059dbd9  8bce                 mov ecx, esi
// 0059dbdb  3b7e04               cmp edi, dword ptr [esi + 4]
// 0059dbde  720f                 jb 0x59dbef
// 0059dbe0  52                   push edx
// 0059dbe1  e8daecffff           call 0x59c8c0
// 0059dbe6  8b4604               mov eax, dword ptr [esi + 4]
// 0059dbe9  5f                   pop edi
// 0059dbea  48                   dec eax
// 0059dbeb  5e                   pop esi
// 0059dbec  c21800               ret 0x18
// 0059dbef  57                   push edi
// 0059dbf0  52                   push edx
// 0059dbf1  e87aedffff           call 0x59c970
// 0059dbf6  8bc7                 mov eax, edi
// 0059dbf8  5f                   pop edi
// 0059dbf9  5e                   pop esi
// 0059dbfa  c21800               ret 0x18
// library rbx2016-raknet/CloudServer.cpp (function ?Insert@?$OrderedList@URakNetGUID@RakNet@@PAUCloudData@CloudServer@2@$1?KeyDataPtrComp@42@KAHABU12@ABQAU342@@Z@DataStructures@@QAEIABURakNetGUID@RakNet@@ABQAUCloudData@CloudServer@4@_NPBDIP6AH01@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudServer.cpp
