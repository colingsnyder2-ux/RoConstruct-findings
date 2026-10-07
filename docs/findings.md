# RoConstruct findings

This tree records reproducible reverse-engineering results for the historical
Roblox client builds listed in `clients/clients.json`.

## What is included

- `src/<client>/<address>.cpp`: recovered or byte-verified function bodies and
  the compiler/source directives needed to re-check them.
- `docs/data/`: per-build progress and function metadata.
- `roc/`: the matcher, compiler-fingerprint, library, and cross-client tools.

Matches are claims only when the generated object is byte-identical to the
target function. Source provenance is recorded in the generated directives.

## Deliberately excluded

Raw Roblox executables, DLLs, installers, PDB/MAP files, and downloaded library
archives remain local. They are not required to consume the metadata or review
the method, and should not be redistributed from this repository.

## Important external sources

- [RBLXDecomp/RBXGSdecomp](https://github.com/RBLXDecomp/RBXGSdecomp) — 2007
  Roblox-owned source and VS2005 SP1 build context.
- [RBLXDecomp repositories](https://github.com/orgs/RBLXDecomp/repositories) —
  matching G3D, RakNet, SDL, Boost, and Mesa sources.
- [OGRE 1.7 source archive](https://sourceforge.net/projects/ogre/files/ogre/1.7/)
  — public Cthugha-era Ogre source.
- [RBXGS setup archive](https://archive.org/details/rbxgssetup) — 2007–08
  RBXGS/RCC installers; community reports indicate some payloads include PDBs.
- [Roblox 2009 client archive](https://archive.roblonium.com/Client/Windows/RobloxApp/2009/9.2009/)
  — dated client variants for comparison.

## Reproduction

Client payloads and compiler installations are supplied by the user locally.
Run the documented `roc` commands after fetching the required public sources;
the repository does not bundle those payloads.
