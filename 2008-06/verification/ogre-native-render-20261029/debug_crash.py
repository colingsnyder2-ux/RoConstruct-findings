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
exe=Path('rebuild/2008-06/out/tests/ogre_link/ogre_link.exe').resolve();si=SI();si.cb=c.sizeof(si);pi=PI();assert k.CreateProcessW(str(exe),None,None,None,False,0x08000002,None,str(exe.parent),c.byref(si),c.byref(pi)),c.get_last_error();modules=[];result={};first_break=True
while True:
 e=DE();assert k.WaitForDebugEvent(c.byref(e),30000),c.get_last_error();data=bytes(e.data);status=0x10002
 if e.code in [3,6]:
  handle=struct.unpack_from('<Q',data,0)[0];base=struct.unpack_from('<Q',data,24 if e.code==3 else 8)[0];name=c.create_unicode_buffer(32768)
  if handle and k.GetFinalPathNameByHandleW(handle,name,len(name),0):modules.append({'base':base,'name':name.value})
  if handle:k.CloseHandle(handle)
 if e.code==1:
  code=struct.unpack_from('<I',data,0)[0];address=struct.unpack_from('<Q',data,16)[0];status=0x80010001
  if code==0x80000003 and first_break:first_break=False;status=0x10002
  elif code==0xc0000005:
   thread=k.OpenThread(0x48,False,e.tid);ctx=CX();ctx.flags=0x10007;assert k.Wow64GetThreadContext(thread,c.byref(ctx)),c.get_last_error();k.CloseHandle(thread);buf=c.create_string_buffer(256);got=c.c_size_t();assert k.ReadProcessMemory(pi.process,ctx.esp,buf,len(buf),c.byref(got));result={'exception':hex(code),'address':hex(address),'fault_address':hex(struct.unpack_from('<Q',data,40)[0]),'registers':{n:hex(getattr(ctx,n)) for n in ['eip','esp','ebp','eax','ebx','ecx','edx','esi','edi']},'stack':[hex(x) for x in struct.unpack('<64I',buf.raw)],'modules':modules};k.TerminateProcess(pi.process,code)
 if e.code==5:k.ContinueDebugEvent(e.pid,e.tid,status);break
 k.ContinueDebugEvent(e.pid,e.tid,status)
k.CloseHandle(pi.thread);k.CloseHandle(pi.process);Path('work/ogre-native-render-20261029/crash.json').write_text(json.dumps(result,indent=1));print({k:v for k,v in result.items() if k not in ['modules','stack']});print('stack',result.get('stack',[])[:20]);print('modules',[(Path(m['name']).name,hex(m['base'])) for m in modules])
