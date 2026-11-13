Follow the steps below in order to run the Jupyter Notebook in order to display the python script containing the information about a sine waveform generation,

1. Open this directory in the terminal
2. Run:
```bash
python3 -m venv .venv
source .venv/bin/activate
pip install jupyterlab numpy matplotlib
jupyter lab
```

(Check for json errors in the jupyter notebook script scipt by running:
`python3 -m json.tool *.ipynb`)

To create a pdf without the python code blocks, source the venv as indicated above and then run:
```bash
jupyter nbconvert --to pdf --no-input sine_information.ipynb
```
