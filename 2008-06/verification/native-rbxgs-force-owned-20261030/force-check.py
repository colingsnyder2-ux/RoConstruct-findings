import json
import shutil
from pathlib import Path

from roc import rebuild

root = Path.cwd()
out = root / "rebuild/2008-06/out"
spec = json.loads((root / "rebuild/2008-06/modules/rbxgs-app.json").read_text())
folder = out / "RbxgsApp/linked"
owners = json.loads((out / "RbxgsApp/owned-symbols.json").read_text())
externals = {p.name: rebuild.coff_externals(p.read_bytes()) for p in folder.glob("*.obj")}
roots = sorted({e["symbol"] for entries in owners.values() for e in entries
                if externals.get(e["object"], {}).get(e["symbol"])})
test = "rbxgs_force_owned_20261030"
source = root / "rebuild/2008-06/tests" / (test + ".cpp")
source.write_text("".join('#pragma comment(linker, "/INCLUDE:' + s + '")\n' for s in roots)
                  + (root / "rebuild/2008-06/tests/rbxgs_app.cpp").read_text())
test_dir = out / "tests" / test
test_dir.mkdir(parents=True, exist_ok=True)
sdl = root / "tools/libs/g3d-6.09/source/demos/SDL.dll"
shutil.copy2(sdl, test_dir / "SDL.dll")
includes = rebuild._overlaid([rebuild._spec_path("2008-06", p) for p in spec["test_includes"]], [],
                             ((root / "tools/rbxgs/Client").resolve(), out / "RbxgsApp/overlay"))[0]
libs = [folder / "linked.lib"] + [out / module / "linked/linked.lib" for module in
        ["G3D", "G3D-GL", "libpng", "Boost", "RakNet", "zlib-winapi", "zlib"]]
libs.append(rebuild.dll_import_lib("2008-06", sdl.name, source=sdl))
result = rebuild.link_test("2008-06", test, libs, includes=includes, defines=spec["test_defines"])
print(json.dumps({"root_count": len(roots), "result": result}, indent=2))
