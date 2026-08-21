# PS Vita ELF-PRX loader for IDA Pro 9.x

Designed for loading decrypted retail game binaries in the [ELF-PRX](https://wiki.henkaku.xyz/vita/PRX) format (`eboot.bin.elf`) within IDA Pro.

The loader resolves imports/exports.
Separate plugin is available that annotates MOVW/MOVT pairs

Originally loosely based on xyz's [vitadump](https://github.com/xyzz/vitadump).

### Requirements

- IDA Professional 9.1
  - other 9.x versions might work depending on how much has the python API changed (untested)
- IDAPython plugin for IDA

### Usage

- Copy following files to your `loaders/` directory where IDA is installed (usually `C:\Program Files\IDA Professional 9.1\loaders`):
  - `psvita_loader.py`
  - `psvita_functions.h`
  - `psvita_types.h`
  - `psvita_db.yml`
- *(Optional)* Copy following files to your `plugins/` directory where IDA is installed (usually `C:\Program Files\IDA Professional 9.1\plugins`):
  - `annotate_movw_movt_pairs.py`
- Open any `eboot.bin.elf` within IDA and select the `psvita_loader.py` loader from the list
- *(Optional)* To run the `annotate_movw_movt_pairs.py` plugin, click `Edit -> Plugins -> Annotate MOVW/MOVT pairs`
