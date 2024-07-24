# node-gyp-test

This is a simple skeleton app that can be used to test if your node-gyp build environment is working.

Alternatively, use this as a starting point for your native module.

[![Build and Run on all platforms](https://github.com/cinderblock/node-gyp-test/actions/workflows/build-and-run.yaml/badge.svg)](https://github.com/cinderblock/node-gyp-test/actions/workflows/build-and-run.yaml)

## Usage

```bash
npm install         # Install dependencies from Npm: node-gyp, node-addon-api, and bindings
npm run build       # Build .node binary for local system
npm --silent start  # Tell npm to be quiet and run the test
```

> Should print "Hello, world!" to the console.
