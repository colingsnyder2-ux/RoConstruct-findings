// from server: 100% by auto
// roc 2012-06 0093b780  unit: seg_00930000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093b780
//
// 0093b780  83ec08               sub esp, 8
// 0093b783  53                   push ebx
// 0093b784  55                   push ebp
// 0093b785  56                   push esi
// 0093b786  8bf0                 mov esi, eax
// 0093b788  e8a3fbffff           call 0x93b330
// 0093b78d  8bd8                 mov ebx, eax
// 0093b78f  8d4301               lea eax, [ebx + 1]
// 0093b792  3dffffff3f           cmp eax, 0x3fffffff
// 0093b797  7719                 ja 0x93b7b2
// 0093b799  8b16                 mov edx, dword ptr [esi]
// 0093b79b  8d0c9d00000000       lea ecx, [ebx*4]
// 0093b7a2  51                   push ecx
// 0093b7a3  6a00                 push 0
// 0093b7a5  6a00                 push 0
// 0093b7a7  52                   push edx
// 0093b7a8  e8b3b7ffff           call 0x936f60
// 0093b7ad  83c410               add esp, 0x10
// 0093b7b0  eb0b                 jmp 0x93b7bd
// 0093b7b2  8b06                 mov eax, dword ptr [esi]
// 0093b7b4  50                   push eax
// 0093b7b5  e886b7ffff           call 0x936f40
// 0093b7ba  83c404               add esp, 4
// 0093b7bd  8d0c9d00000000       lea ecx, [ebx*4]
// 0093b7c4  51                   push ecx
// 0093b7c5  894714               mov dword ptr [edi + 0x14], eax
// 0093b7c8  895f30               mov dword ptr [edi + 0x30], ebx
// 0093b7cb  8b5604               mov edx, dword ptr [esi + 4]
// 0093b7ce  50                   push eax
// 0093b7cf  52                   push edx
// 0093b7d0  e87bb1ffff           call 0x936950
// 0093b7d5  83c40c               add esp, 0xc
// 0093b7d8  85c0                 test eax, eax
// 0093b7da  7423                 je 0x93b7ff
// 0093b7dc  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093b7df  8b0e                 mov ecx, dword ptr [esi]
// 0093b7e1  68b4fdbf00           push 0xbffdb4
// 0093b7e6  50                   push eax
// 0093b7e7  6898fdbf00           push 0xbffd98
// 0093b7ec  51                   push ecx
// 0093b7ed  e84e49f1ff           call 0x850140
// 0093b7f2  8b16                 mov edx, dword ptr [esi]
// 0093b7f4  6a03                 push 3
// 0093b7f6  52                   push edx
// 0093b7f7  e88494f1ff           call 0x854c80
// 0093b7fc  83c418               add esp, 0x18
// 0093b7ff  e82cfbffff           call 0x93b330
// 0093b804  8bd8                 mov ebx, eax
// 0093b806  8d4301               lea eax, [ebx + 1]
// 0093b809  3d55555515           cmp eax, 0x15555555
// 0093b80e  7719                 ja 0x93b829
// 0093b810  8b16                 mov edx, dword ptr [esi]
// 0093b812  8d0c5b               lea ecx, [ebx + ebx*2]
// 0093b815  03c9                 add ecx, ecx
// 0093b817  03c9                 add ecx, ecx
// 0093b819  51                   push ecx
// 0093b81a  6a00                 push 0
// 0093b81c  6a00                 push 0
// 0093b81e  52                   push edx
// 0093b81f  e83cb7ffff           call 0x936f60
// 0093b824  83c410               add esp, 0x10
// 0093b827  eb0b                 jmp 0x93b834
// 0093b829  8b06                 mov eax, dword ptr [esi]
// 0093b82b  50                   push eax
// 0093b82c  e80fb7ffff           call 0x936f40
// 0093b831  83c404               add esp, 4
// 0093b834  894718               mov dword ptr [edi + 0x18], eax
// 0093b837  895f38               mov dword ptr [edi + 0x38], ebx
// 0093b83a  85db                 test ebx, ebx
// 0093b83c  0f8e23010000         jle 0x93b965
// 0093b842  33c0                 xor eax, eax
// 0093b844  8bcb                 mov ecx, ebx
// 0093b846  eb08                 jmp 0x93b850
// 0093b848  8da42400000000       lea esp, [esp]
// 0093b84f  90                   nop 
// 0093b850  8b5718               mov edx, dword ptr [edi + 0x18]
// 0093b853  c7041000000000       mov dword ptr [eax + edx], 0
// 0093b85a  83c00c               add eax, 0xc
// 0093b85d  83e901               sub ecx, 1
// 0093b860  75ee                 jne 0x93b850
// 0093b862  85db                 test ebx, ebx
// 0093b864  0f8efb000000         jle 0x93b965
// 0093b86a  33ed                 xor ebp, ebp
// 0093b86c  8d642400             lea esp, [esp]
// 0093b870  e82bfbffff           call 0x93b3a0
// 0093b875  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0093b878  6a04                 push 4
// 0093b87a  8d542410             lea edx, [esp + 0x10]
// 0093b87e  890429               mov dword ptr [ecx + ebp], eax
// 0093b881  8b4604               mov eax, dword ptr [esi + 4]
// 0093b884  52                   push edx
// 0093b885  50                   push eax
// 0093b886  e8c5b0ffff           call 0x936950
// 0093b88b  83c40c               add esp, 0xc
// 0093b88e  85c0                 test eax, eax
// 0093b890  7423                 je 0x93b8b5
// 0093b892  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0093b895  8b16                 mov edx, dword ptr [esi]
// 0093b897  68b4fdbf00           push 0xbffdb4
// 0093b89c  51                   push ecx
// 0093b89d  6898fdbf00           push 0xbffd98
// 0093b8a2  52                   push edx
// 0093b8a3  e89848f1ff           call 0x850140
// 0093b8a8  8b06                 mov eax, dword ptr [esi]
// 0093b8aa  6a03                 push 3
// 0093b8ac  50                   push eax
// 0093b8ad  e8ce93f1ff           call 0x854c80
// 0093b8b2  83c418               add esp, 0x18
// 0093b8b5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0093b8ba  7d23                 jge 0x93b8df
// 0093b8bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0093b8bf  8b16                 mov edx, dword ptr [esi]
// 0093b8c1  68c4fdbf00           push 0xbffdc4
// 0093b8c6  51                   push ecx
// 0093b8c7  6898fdbf00           push 0xbffd98
// 0093b8cc  52                   push edx
// 0093b8cd  e86e48f1ff           call 0x850140
// 0093b8d2  8b06                 mov eax, dword ptr [esi]
// 0093b8d4  6a03                 push 3
// 0093b8d6  50                   push eax
// 0093b8d7  e8a493f1ff           call 0x854c80
// 0093b8dc  83c418               add esp, 0x18
// 0093b8df  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0093b8e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0093b8e6  6a04                 push 4
// 0093b8e8  8d442414             lea eax, [esp + 0x14]
// 0093b8ec  89542904             mov dword ptr [ecx + ebp + 4], edx
// 0093b8f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093b8f3  50                   push eax
// 0093b8f4  51                   push ecx
// 0093b8f5  e856b0ffff           call 0x936950
// 0093b8fa  83c40c               add esp, 0xc
// 0093b8fd  85c0                 test eax, eax
// 0093b8ff  7423                 je 0x93b924
// 0093b901  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093b904  8b06                 mov eax, dword ptr [esi]
// 0093b906  68b4fdbf00           push 0xbffdb4
// 0093b90b  52                   push edx
// 0093b90c  6898fdbf00           push 0xbffd98
// 0093b911  50                   push eax
// 0093b912  e82948f1ff           call 0x850140
// 0093b917  8b0e                 mov ecx, dword ptr [esi]
// 0093b919  6a03                 push 3
// 0093b91b  51                   push ecx
// 0093b91c  e85f93f1ff           call 0x854c80
// 0093b921  83c418               add esp, 0x18
// 0093b924  837c241000           cmp dword ptr [esp + 0x10], 0
// 0093b929  7d23                 jge 0x93b94e
// 0093b92b  8b560c               mov edx, dword ptr [esi + 0xc]
// 0093b92e  8b06                 mov eax, dword ptr [esi]
// 0093b930  68c4fdbf00           push 0xbffdc4
// 0093b935  52                   push edx
// 0093b936  6898fdbf00           push 0xbffd98
// 0093b93b  50                   push eax
// 0093b93c  e8ff47f1ff           call 0x850140
// 0093b941  8b0e                 mov ecx, dword ptr [esi]
// 0093b943  6a03                 push 3
// 0093b945  51                   push ecx
// 0093b946  e83593f1ff           call 0x854c80
// 0093b94b  83c418               add esp, 0x18
// 0093b94e  8b5718               mov edx, dword ptr [edi + 0x18]
// 0093b951  8b442410             mov eax, dword ptr [esp + 0x10]
// 0093b955  89442a08             mov dword ptr [edx + ebp + 8], eax
// 0093b959  83c50c               add ebp, 0xc
// 0093b95c  83eb01               sub ebx, 1
// 0093b95f  0f850bffffff         jne 0x93b870
// 0093b965  8b5604               mov edx, dword ptr [esi + 4]
// 0093b968  6a04                 push 4
// 0093b96a  8d4c2414             lea ecx, [esp + 0x14]
// 0093b96e  51                   push ecx
// 0093b96f  52                   push edx
// 0093b970  e8dbafffff           call 0x936950
// 0093b975  83c40c               add esp, 0xc
// 0093b978  85c0                 test eax, eax
// 0093b97a  7423                 je 0x93b99f
// 0093b97c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093b97f  8b0e                 mov ecx, dword ptr [esi]
// 0093b981  68b4fdbf00           push 0xbffdb4
// 0093b986  50                   push eax
// 0093b987  6898fdbf00           push 0xbffd98
// 0093b98c  51                   push ecx
// 0093b98d  e8ae47f1ff           call 0x850140
// 0093b992  8b16                 mov edx, dword ptr [esi]
// 0093b994  6a03                 push 3
// 0093b996  52                   push edx
// 0093b997  e8e492f1ff           call 0x854c80
// 0093b99c  83c418               add esp, 0x18
// 0093b99f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0093b9a3  85db                 test ebx, ebx
// 0093b9a5  7d27                 jge 0x93b9ce
// 0093b9a7  8b460c               mov eax, dword ptr [esi + 0xc]
// 0093b9aa  8b0e                 mov ecx, dword ptr [esi]
// 0093b9ac  68c4fdbf00           push 0xbffdc4
// 0093b9b1  50                   push eax
// 0093b9b2  6898fdbf00           push 0xbffd98
// 0093b9b7  51                   push ecx
// 0093b9b8  e88347f1ff           call 0x850140
// 0093b9bd  8b16                 mov edx, dword ptr [esi]
// 0093b9bf  6a03                 push 3
// 0093b9c1  52                   push edx
// 0093b9c2  e8b992f1ff           call 0x854c80
// 0093b9c7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0093b9cb  83c418               add esp, 0x18
// 0093b9ce  8d4301               lea eax, [ebx + 1]
// 0093b9d1  3dffffff3f           cmp eax, 0x3fffffff
// 0093b9d6  7719                 ja 0x93b9f1
// 0093b9d8  8b16                 mov edx, dword ptr [esi]
// 0093b9da  8d0c9d00000000       lea ecx, [ebx*4]
// 0093b9e1  51                   push ecx
// 0093b9e2  6a00                 push 0
// 0093b9e4  6a00                 push 0
// 0093b9e6  52                   push edx
// 0093b9e7  e874b5ffff           call 0x936f60
// 0093b9ec  83c410               add esp, 0x10
// 0093b9ef  eb0b                 jmp 0x93b9fc
// 0093b9f1  8b06                 mov eax, dword ptr [esi]
// 0093b9f3  50                   push eax
// 0093b9f4  e847b5ffff           call 0x936f40
// 0093b9f9  83c404               add esp, 4
// 0093b9fc  89471c               mov dword ptr [edi + 0x1c], eax
// 0093b9ff  33c0                 xor eax, eax
// 0093ba01  895f24               mov dword ptr [edi + 0x24], ebx
// 0093ba04  85db                 test ebx, ebx
// 0093ba06  7e17                 jle 0x93ba1f
// 0093ba08  eb06                 jmp 0x93ba10
// 0093ba0a  8d9b00000000         lea ebx, [ebx]
// 0093ba10  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0093ba13  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 0093ba1a  40                   inc eax
// 0093ba1b  3bc3                 cmp eax, ebx
// 0093ba1d  7cf1                 jl 0x93ba10
// 0093ba1f  33ed                 xor ebp, ebp
// 0093ba21  85db                 test ebx, ebx
// 0093ba23  7e10                 jle 0x93ba35
// 0093ba25  e876f9ffff           call 0x93b3a0
// 0093ba2a  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0093ba2d  8904aa               mov dword ptr [edx + ebp*4], eax
// 0093ba30  45                   inc ebp
// 0093ba31  3beb                 cmp ebp, ebx
// 0093ba33  7cf0                 jl 0x93ba25
// 0093ba35  5e                   pop esi
// 0093ba36  5d                   pop ebp
// 0093ba37  5b                   pop ebx
// 0093ba38  83c408               add esp, 8
// 0093ba3b  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
