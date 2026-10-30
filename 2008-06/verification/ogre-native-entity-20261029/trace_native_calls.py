import ctypes as c,struct,json,re
from ctypes import wintypes as w
from pathlib import Path
k=c.WinDLL('kernel32',use_last_error=True)
class SI(c.Structure):
 _fields_=[('cb',w.DWORD),('reserved',w.LPWSTR),('desktop',w.LPWSTR),('title',w.LPWSTR),('x',w.DWORD),('y',w.DWORD),('xs',w.DWORD),('ys',w.DWORD),('xc',w.DWORD),('yc',w.DWORD),('fill',w.DWORD),('flags',w.DWORD),('show',w.WORD),('res2',w.WORD),('data',c.c_void_p),('input',w.HANDLE),('output',w.HANDLE),('error',w.HANDLE)]
class PI(c.Structure):_fields_=[('process',w.HANDLE),('thread',w.HANDLE),('pid',w.DWORD),('tid',w.DWORD)]
class DE(c.Structure):_fields_=[('code',w.DWORD),('pid',w.DWORD),('tid',w.DWORD),('padding',w.DWORD),('data',c.c_ubyte*160)]
class CX(c.Structure):
 _fields_=[('flags',w.DWORD)]+[(x,w.DWORD) for x in ['dr0','dr1','dr2','dr3','dr6','dr7']]+[('fp',c.c_ubyte*112)]+[(x,w.DWORD) for x in ['gs','fs','es','ds','edi','esi','ebx','edx','ecx','eax','ebp','eip','cs','eflags','esp','ss']]+[('extended',c.c_ubyte*512)]
k.CreateProcessW.argtypes=[w.LPCWSTR,w.LPWSTR,c.c_void_p,c.c_void_p,w.BOOL,w.DWORD,c.c_void_p,w.LPCWSTR,c.POINTER(SI),c.POINTER(PI)];k.CreateProcessW.restype=w.BOOL
k.WaitForDebugEvent.argtypes=[c.POINTER(DE),w.DWORD];k.ContinueDebugEvent.argtypes=[w.DWORD,w.DWORD,w.DWORD];k.OpenThread.argtypes=[w.DWORD,w.BOOL,w.DWORD];k.OpenThread.restype=w.HANDLE;k.Wow64GetThreadContext.argtypes=[w.HANDLE,c.POINTER(CX)];k.ReadProcessMemory.argtypes=[w.HANDLE,c.c_void_p,c.c_void_p,c.c_size_t,c.POINTER(c.c_size_t)];k.TerminateProcess.argtypes=[w.HANDLE,w.UINT];k.CloseHandle.argtypes=[w.HANDLE];k.GetFinalPathNameByHandleW.argtypes=[w.HANDLE,w.LPWSTR,w.DWORD,w.DWORD]

k.Wow64SetThreadContext.argtypes=[w.HANDLE,c.POINTER(CX)]
prefixes=['?_renderScene@RbxSceneManager','?_setPass@RbxSceneManager','?renderSingleObject@RbxSceneManager','?renderObjects@RbxSceneManager']
targets={}
for line in Path('rebuild/2008-06/out/tests/ogre_link/ogre_link.map').read_text().splitlines():
 fields=line.split()
 if len(fields)>3 and re.fullmatch('[0-9a-fA-F]{8}',fields[2]):
  for prefix in prefixes:
   if fields[1].startswith(prefix):targets[fields[1]]=int(fields[2],16)
assert len(targets)==4,targets
exe=Path('rebuild/2008-06/out/tests/ogre_link/ogre_link.exe').resolve()
si=SI();si.cb=c.sizeof(si);pi=PI()
assert k.CreateProcessW(str(exe),None,None,None,False,0x08000002,None,str(exe.parent),c.byref(si),c.byref(pi)),c.get_last_error()
first_break=True;hits={sym:0 for sym in targets};callers={sym:[] for sym in targets};exit_code=None;fault=None;single_arguments=[]
while True:
 e=DE();assert k.WaitForDebugEvent(c.byref(e),30000),c.get_last_error();data=bytes(e.data);status=0x10002
 if e.code in [3,6]:
  handle=struct.unpack_from('<Q',data,0)[0]
  if e.code==3:assert struct.unpack_from('<Q',data,24)[0]==0x400000,'map rebasing required'
  if handle:k.CloseHandle(handle)
 if e.code==1:
  code=struct.unpack_from('<I',data,0)[0];status=0x80010001
  if (code==0x80000003 and first_break) or code in (0x80000004,0x4000001e):
   thread=k.OpenThread(0x58,False,e.tid);ctx=CX();ctx.flags=0x10017
   assert k.Wow64GetThreadContext(thread,c.byref(ctx)),c.get_last_error()
   if first_break:
    first_break=False
    for index,address in enumerate(targets.values()):setattr(ctx,'dr'+str(index),address)
    ctx.dr7=0x55
   else:
    names=[name for name,address in targets.items() if ctx.eip==address];assert names,(hex(ctx.eip),hex(ctx.dr6))
    name=names[0];hits[name]+=1
    if name.startswith('?renderSingleObject@'):
     args=c.create_string_buffer(20);ngot=c.c_size_t()
     if k.ReadProcessMemory(pi.process,ctx.esp,args,20,c.byref(ngot)):single_arguments.append({'this':hex(ctx.ecx),'stack':[hex(x) for x in struct.unpack('<5I',args.raw)]})
     pointer=struct.unpack('<5I',args.raw)[2];raw=c.create_string_buffer(0xb0)
     if k.ReadProcessMemory(pi.process,pointer,raw,len(raw),c.byref(ngot)):single_arguments[-1]['pass_fields']={'max_lights':struct.unpack_from('<H',raw.raw,0x9e)[0],'start_light':struct.unpack_from('<H',raw.raw,0xa0)[0],'iterate':raw.raw[0xa2],'per_iteration':struct.unpack_from('<H',raw.raw,0xa4)[0],'only_one_type':raw.raw[0xa6]}
    buf=c.create_string_buffer(4);got=c.c_size_t()
    if k.ReadProcessMemory(pi.process,ctx.esp,buf,4,c.byref(got)):callers[name].append(hex(struct.unpack('<I',buf.raw)[0]))
    ctx.eflags|=0x10000
   ctx.dr6=0
   assert k.Wow64SetThreadContext(thread,c.byref(ctx)),c.get_last_error();k.CloseHandle(thread);status=0x10002
  elif code==0xc0000005:
   fault=hex(struct.unpack_from('<Q',data,16)[0]);k.TerminateProcess(pi.process,code)
 if e.code==5:
  exit_code=struct.unpack_from('<I',data,0)[0];k.ContinueDebugEvent(e.pid,e.tid,status);break
 k.ContinueDebugEvent(e.pid,e.tid,status)
k.CloseHandle(pi.thread);k.CloseHandle(pi.process)
result={'exit':exit_code,'fault':fault,'hardware_execution_breakpoints_only':True,'code_bytes_modified':False,'targets':{name:hex(address) for name,address in targets.items()},'hits':hits,'return_addresses':callers,'single_arguments':single_arguments}
Path('work/ogre-native-entity-20261029/native-call-trace.json').write_text(json.dumps(result,indent=1));print(json.dumps(result,indent=1));assert exit_code==0 and all(hits.values()),result
